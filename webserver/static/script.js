let canvas = document.getElementById("canvas");
let ctx = canvas.getContext("2d");
let ws = new WebSocket("ws://localhost:8000/ws");

let target_point = { x: 0.5, y: 0.5 }; // Desired target position (red dot)
let point = { x: 0.5, y: 0.5 }; // Actual machine position (blue dot)

// Function to resize canvas to the largest square possible
function resizeCanvas() {
    let size = Math.min(window.innerWidth, window.innerHeight);
    canvas.width = size;
    canvas.height = size;
    drawPoint();
}

// Initial canvas setup
window.addEventListener("resize", resizeCanvas);
resizeCanvas();

function drawPoint() {
    ctx.clearRect(0, 0, canvas.width, canvas.height);
    
    let rect = canvas.getBoundingClientRect(); // Get canvas position on screen
    let scaleX = rect.width;
    let scaleY = rect.height;

    // Draw crosshair
    ctx.strokeStyle = "gray";
    ctx.lineWidth = canvas.width * 0.005;

    ctx.beginPath();
    ctx.moveTo(0, point.y * scaleY);
    ctx.lineTo(canvas.width, point.y * scaleY);
    ctx.stroke();

    // ctx.beginPath();
    // ctx.moveTo(point.x * scaleX, 0);
    // ctx.lineTo(point.x * scaleX, canvas.height);
    // ctx.stroke();

    // Draw actual machine position in blue
    ctx.beginPath();
    ctx.fillStyle = "blue";
    ctx.arc(point.x * scaleX, point.y * scaleY, canvas.width * 0.02, 0, Math.PI * 2);
    ctx.fill();

    // Draw target point in red
    ctx.beginPath();
    ctx.fillStyle = "red";
    ctx.arc(target_point.x * scaleX, target_point.y * scaleY, canvas.width * 0.02, 0, Math.PI * 2);
    ctx.fill();
}

canvas.addEventListener("mousemove", (event) => {
    let rect = canvas.getBoundingClientRect(); // Get canvas position

    target_point.x = (event.clientX - rect.left) / rect.width; // Convert to 0-1 range
    target_point.y = (event.clientY - rect.top) / rect.height;

    // Keep within bounds
    target_point.x = Math.max(0, Math.min(1, target_point.x));
    target_point.y = Math.max(0, Math.min(1, target_point.y));

    drawPoint();
    ws.send(JSON.stringify(target_point)); // Send the target position to FastAPI
});

// Receive the true x, y values from FastAPI WebSocket
ws.onmessage = function (event) {
    let data = JSON.parse(event.data);
    point.x = data.x; // Update with true x value from the machine
    point.y = data.y; // Update with true y value from the machine
    drawPoint();
};

drawPoint();
