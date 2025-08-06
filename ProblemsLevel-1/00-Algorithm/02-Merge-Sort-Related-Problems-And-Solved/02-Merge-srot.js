function mergeSort(arr) {
    // base case
    if (arr.length <= 1) {
      return arr;
    }
  
    const midPoint = Math.floor(arr.length / 2);
  
    // divide the array into two parts
    const leftArr = arr.slice(0, midPoint);
    const rightArr = arr.slice(midPoint);
  
    // recursively sort the divided arrays
    const sortedLeftArr = mergeSort(leftArr);
    const sortedRightArr = mergeSort(rightArr);
  
    // merge the two sorted arrays
    const sortedArr = [];
    let leftIndex = 0;
    let rightIndex = 0;
  
    while (leftIndex < sortedLeftArr.length && rightIndex < sortedRightArr.length) {
      if (sortedLeftArr[leftIndex] < sortedRightArr[rightIndex]) {
        sortedArr.push(sortedLeftArr[leftIndex]);
        leftIndex++;
      } else {
        sortedArr.push(sortedRightArr[rightIndex]);
        rightIndex++;
      }
    }
  
    return sortedArr.concat(sortedLeftArr.slice(leftIndex), sortedRightArr.slice(rightIndex));
  }
  
  const arr = [5, 3, 7, 1, 8, 9];
  const sortedArr = mergeSort(arr);
  console.log(sortedArr);
  