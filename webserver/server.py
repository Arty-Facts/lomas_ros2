from fastapi import FastAPI, WebSocket
from fastapi.responses import HTMLResponse
from fastapi.staticfiles import StaticFiles
import uvicorn
import json
import asyncio
from move import MachineMover
import rclpy

app = FastAPI()

app.mount("/static", StaticFiles(directory="webserver/static"), name="static")
rclpy.init()
mover = MachineMover()

@app.get("/")
async def get():
    with open("webserver/index.html", "r") as file:
        return HTMLResponse(file.read())

@app.websocket("/ws")
async def websocket_endpoint(websocket: WebSocket):
    await websocket.accept()
    
    async def send_position():
        while True:
            curr_x, curr_y = mover.get_current_position()
            print(f"Current position: x={curr_x}, y={curr_y}")
            await websocket.send_text(json.dumps({"x": curr_x, "y": curr_y}))
            await asyncio.sleep(0.1)  # Send position every second
    
    asyncio.create_task(send_position())
    
    while True:
        data = await websocket.receive_text()
        data = json.loads(data)
        x, y = float(data["x"]), float(data["y"])
        print(data["x"], data["y"])
        mover.move_once(x, y)

if __name__ == "__main__":
    try:
        uvicorn.run(app, host="127.0.0.1", port=8000)
    finally:
        mover.destroy_node()
        rclpy.shutdown()