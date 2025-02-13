let canvas = document.getElementById("canvas");
let ctx = canvas.getContext("2d");
let ws = new WebSocket("ws://localhost:8000/ws");

let point = { x: 0.5, y: 0.5 }; // Start in the middle

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
    ctx.beginPath();
    ctx.strokeStyle = "gray";
    ctx.lineWidth = canvas.width * 0.005;

    let rect = canvas.getBoundingClientRect(); // Get canvas position on screen


    let screenX = (point.x * rect.width); // Convert 0-1 to screen space
    let screenY = (point.y * rect.height);


    ctx.arc(screenX, screenY, canvas.width * 0.02, 0, Math.PI * 2); // Adjust to canvas space
    ctx.fill();

    // Draw vertical crosshair line
    // ctx.beginPath();
    // ctx.moveTo(screenX, 0);
    // ctx.lineTo(screenX, canvas.height);
    // ctx.stroke();

    // Draw horizontal crosshair line
    ctx.beginPath();
    ctx.moveTo(0, screenY);
    ctx.lineTo(canvas.width, screenY);
    ctx.stroke();
}

canvas.addEventListener("mousemove", (event) => {
    let rect = canvas.getBoundingClientRect(); // Get canvas position

    point.x = (event.clientX - rect.left) / rect.width; // Convert to 0-1 range
    point.y = (event.clientY - rect.top) / rect.height;

    // Keep within bounds
    point.x = Math.max(0, Math.min(1, point.x));
    point.y = Math.max(0, Math.min(1, point.y));

    drawPoint();
    ws.send(JSON.stringify(point));
});

drawPoint();
