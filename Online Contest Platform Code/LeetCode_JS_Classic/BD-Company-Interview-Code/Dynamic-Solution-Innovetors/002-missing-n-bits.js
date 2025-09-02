
/* 
- Create a set to store the [input numbers as integers]
- Convert [binary strings to integers] and store them in the set
-  Check for the first missing number
    - Convert the missing number back to a binary string with leading zeros and return
    - return "" In case all numbers are present (should not happen if inputs are valid)

*/


function findMissingNumbers(inputs){
    const n = inputs[0].length; // Length of the binary strings (n bits)
    const maxNum = 1 << n; // Maximum number for n bits (2^n)

    // Create a set to store the [input numbers as integers]
    const inputSet = new Set();

     // Convert [binary strings to integers] and store them in the set
     inputs.forEach(binary=>{
       const a = inputSet.add(parseInt(binary,2));
    //    console.log(a)
     });

     // Check for the first missing number
     for (let i = 0; i < maxNum; i++) {
        if (!inputSet.has(i)) {
            // Convert the missing number back to a binary string with leading zeros
            console.log(i.toString(2))
            return i.toString(2).padStart(n, '0');
        }
    }
    return "";  // In case all numbers are present (should not happen if inputs are valid)

    // console.log(inputSet)
}


const inputs = ["000", "001", "010", "011"]; // Example input
findMissingNumbers(inputs)
