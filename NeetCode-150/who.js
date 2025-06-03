//❯ node "/Users/bappasaha/Desktop/2025-VitePress/NeetCode/node who.js"
// 5 Rajib
// 3 Rajib
 
/* 
steps:
time complexity: O(n) as one loop .
applied two pointer. beginning pointer starts from 0 and end pointer starts from n-1.
after every trun toggle the turn between rajib and rakib.
  
*/

function whoWinsTheGame(n, chocolates) {
    let leftPointer = 0;
    let rightPointer = n - 1;
    let rajib = 0;
    let rakib = 0;
    let isRajibTurn = true;

    while (leftPointer <= rightPointer) {
        if (chocolates[leftPointer] >= chocolates[rightPointer]) {
            if (isRajibTurn)
                rajib = rajib + chocolates[leftPointer++];
            else
                rakib = rakib + chocolates[leftPointer++];
        } else {
            if (isRajibTurn)
                rajib = rajib + chocolates[rightPointer--];
            else
                rakib = rakib + chocolates[rightPointer--];
        }
        isRajibTurn = !isRajibTurn; 
    }

    let difference = Math.abs(rajib - rakib);
    if (rajib > rakib)
        console.log(`${difference} Rajib`);
    else if (rakib > rajib)
        console.log(`${difference} Rakib`);
    else
        console.log(`${difference} Both Chocolates are same`);
}

// example inputs:
const chocolatesInput1 = [10, 3, 4, 6]; 
const n1 = chocolatesInput1.length;

const chocolatesInput2 = [1,2,3,4,5]; 
const n2 = chocolatesInput2.length;

whoWinsTheGame(n1, chocolatesInput1);   // 5 Rajib
whoWinsTheGame(n2, chocolatesInput2);   // 3 Rajib

