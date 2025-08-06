function main() {
    let a = 50;
    let aPtr = { value: a }; // Simulating a pointer with an object containing a property
    // let bPtr = a; // This line is not applicable in JavaScript

    console.log("int a value:", a);
    console.log("*aPtr value:", aPtr.value); // Dereferencing the "pointer"
    console.log("aPtr value:", aPtr); // Outputting the "pointer" object
    console.log("aPtr address: Memory address concept doesn't exist in JavaScript");

    return 0; // JavaScript doesn't strictly require return value 0
}

main();
