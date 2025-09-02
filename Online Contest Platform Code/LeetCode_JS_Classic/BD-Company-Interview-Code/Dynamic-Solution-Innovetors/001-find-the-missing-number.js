function findMissingNumber(arr, N) {
    for (let i = 1; i <= N; i++) {
        if (!arr.includes(i)) {
            return i; // Return the first missing number
        }
    }
    return -1; // If no number is missing
}

const arr = [1, 2, 4, 5]; // Example input
const N = 5;
console.log(findMissingNumber(arr, N)); // Output: 3