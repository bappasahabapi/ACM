# 🎯 Searching Algorithms

## 🅰 Linear Search O(n)

## 🅱 Binary Search O(logn)

<details>
<summary>Binary Search Explanation </summary>
Steps:

- `Half` of every iteration
- `Sorting Order Array `either ascending or descending.

ex: arr= [-1,0,3,4,5,9,12]

here

- arr[st]=0 meas -1;
- arr[end]=n-1=7-6 =6
- 1st mid = 4

Therory:

- Find the mid mid =(st+end)/2 | `mid =st+(end-st)/2`
- Check Targer

```cpp
    while(st<=end>){
    
    int st=0;
    int end =arr.size()-1;
    
    int mid =st+(end-st)/2;
    
    // check
    if(tar>arr[mid]){
        st=mid+1;
    }
    else if(tar<arr[mid]>){
        end=mid-1;
    }
    else{
        return mid;
    }
    
}
    
    return -1

```
Here’s the iteration calculation and comparison chart for the binary search on `arr1 = {-1, 0, 3, 4, 5, 9, 12}` with `target1 = 12`:

```markdown
# Iteration Calculations and Comparisons

| Iteration | Start (`st`) | End (`end`) | Mid (`mid`) | arr[mid] | Comparison          | Action           |
|-----------|--------------|-------------|-------------|----------|---------------------|------------------|
| 1         | 0            | 6           | 3           | 4        | `12 > 4` (Go Right) | `st = mid + 1`   |
| 2         | 4            | 6           | 5           | 9        | `12 > 9` (Go Right) | `st = mid + 1`   |
| 3         | 6            | 6           | 6           | 12       | `12 == 12` (Found)  | `return mid`     |

### Explanation:
- **Start (`st`)**: The current starting index of the search range.
- **End (`end`)**: The current ending index of the search range.
- **Mid (`mid`)**: Calculated as `mid = st + (end - st) / 2`.
- **arr[mid]**: The value at the `mid` index.
- **Comparison**: Describes how the target value compares to `arr[mid]`.
- **Action**: The resulting action based on the comparison.

### Summary of Actions:
1. **Iteration 1**: Target (`12`) is greater than `arr[mid]` (`4`), so move the start pointer (`st`) to `mid + 1` (index `4`).
2. **Iteration 2**: Target (`12`) is greater than `arr[mid]` (`9`), so move the start pointer (`st`) to `mid + 1` (index `6`).
3. **Iteration 3**: Target (`12`) matches `arr[mid]` (`12`), so return the `mid` index (`6`).
``` 

This chart can be included in your documentation or `README.md` for a clear understanding of the binary search process.

### Visualizing Iterations for `arr1 = {-1, 0, 3, 4, 5, 9, 12}` and `target1 = 12`

```
Iteration 1:
Array:  [-1, 0, 3, 4, 5, 9, 12]
Index:   0   1   2   3   4   5   6
Start:   ^
End:                             ^
Mid:                ^ (arr[mid] = 4)
Action: Go Right (target > arr[mid]), Update Start to 4

Iteration 2:
Array:  [-1, 0, 3, 4, 5, 9, 12]
Index:   0   1   2   3   4   5   6
Start:                       ^
End:                             ^
Mid:                    ^ (arr[mid] = 9)
Action: Go Right (target > arr[mid]), Update Start to 6

Iteration 3:
Array:  [-1, 0, 3, 4, 5, 9, 12]
Index:   0   1   2   3   4   5   6
Start:                           ^
End:                             ^
Mid:                            ^ (arr[mid] = 12)
Action: Found (target == arr[mid]), Return Mid (6)
```

This structure uses arrows (`^`) to point to the current start, end, and mid indices for each iteration. You can also add color highlights or additional markers if visualized with tools.


</details>


## Problem Set:



- [x] bs1-code.cpp : Theory Implementation

- [x] bs2-recursion.cpp : Theory Implementation using recursion.

- [x] `Find the target Number index: `  **Simply Apply the binary search**
    - ❓ arr=[2,3,4,5,9,14,16,18] and target=14 ,|  `output=4, or -1`
        - ◾ solve: 
            - while(st<=end)
                - check if (target == arr[mid]) return mid;
                - check if (tar> arr[mid]]) then serch right and start will be st=mid+1;
                - check if (tar< arr[mid]) then serch left and end will be end=mid-1;
            
- [x] `Celling of a Given Number: ` 
    - ❓ arr=[2,3,4,5,9,14,16,18] and target=15 ,|  `output=16,` or index=6
        - **Find the smallest number that is greater than equal to the target number.** 
        - ◾ solve: 
            - while(st<=end) breaks just return the `st` instead of -1

- [x] `Floor of a Given Number: ` 
    - ❓ arr=[2,3,4,5,9,14,16,18] and target=15 ,|  `output=14,` or index=6
        - **Find the largest number that is smaller than equal to the target number.** 
        - **solve:**
            - while(st<=end) breaks just return the `mid` instead of -1

- [x] ✅  `LC-744 Find the Smallest Letter Greater Than the Target` 
        - **solve:** 
            - applied the celling problem logic 
- [x] ✅  `LC 34. Find First and Last Position of Element in Sorted Array` 
        - **solve:** 
            - applied the celling problem logic 

- [x] ✅  `LC-852:[Mid] `: [LC-852. peak Index in a Mountain Array](https://leetcode.com/problems/peak-index-in-a-mountain-array/description/) 
- 
- [x] ✅  `LC-162:[Mid] `: [162. Find Peak Element](https://leetcode.com/problems/find-peak-element/description/) 

        - **solve:** Everything is same as lc-852
            - instead of  while(st<=end) use while (st<end) and st=0; end=arr.length-1;

- [x] ✅  `LC-33: [Mid]` : [LC-33. Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/description/) | 
