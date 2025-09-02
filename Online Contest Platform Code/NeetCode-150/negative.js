function countSubarraySums(arr, n) {
    let sumCount = new Map();

    // Compute all possible subarray sums
    for (let i = 0; i < n; i++) {
        let currSum = 0;
        for (let j = i; j < n; j++) {
            currSum += arr[j];
            sumCount.set(currSum, (sumCount.get(currSum) || 0) + 1);
        }
    }

    return sumCount;
}

function processQueries(n, q, arr, queries) {
    let sumCount = countSubarraySums(arr, n);

    let results = queries.map(query => sumCount.get(query) || 0);
    console.log(results.join('\n'));
}

// Read input
const fs = require('fs');
const input = fs.readFileSync('/dev/stdin', 'utf8').trim().split('\n');
const [n, q] = input[0].split(' ').map(Number);
const arr = input[1].split(' ').map(Number);
const queries = input.slice(2).map(Number);

// Process and output results
processQueries(n, q, arr, queries);
