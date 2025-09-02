function canFormTriangle(a, b, c) {
    // Check the triangle inequality theorem
    return (a + b > c) && (a + c > b) && (b + c > a);
}

// Function to get user input and check if they can form a triangle
function checkTriangle() {
    // Prompt the user for input
    const a = parseFloat(prompt("Enter the length of side a:"));
    const b = parseFloat(prompt("Enter the length of side b:"));
    const c = parseFloat(prompt("Enter the length of side c:"));

    // Check if they can form a triangle
    if (canFormTriangle(a, b, c)) {
        alert("The values can form a triangle.");
    } else {
        alert("The values cannot form a triangle.");
    }
}

// Call the function to execute
checkTriangle();