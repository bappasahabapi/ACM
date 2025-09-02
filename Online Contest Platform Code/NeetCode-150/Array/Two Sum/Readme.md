# Two Sum
`🔥 hashing`
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

`Example 1:`

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
`Example 2:`

Input: nums = [3,2,4], target = 6
Output: [1,2]
`Example 3:`

Input: nums = [3,3], target = 6
Output: [0,1]


## Brute Force
- O(n62)
## Two Pointer optimization
- O(n log n)
## Hasing
- O(n)

Using` two pointer` approach

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0; i<arr.size();i++ ){
            int first =arr[i];
            int second =target -arr[i];

            if(mp.find(second) != mp.end()){
                ans.push_back(i);
                ans.push_back(mp[second]);
                break;
            }

            mp[first] =i;
        }
        return ans;
    }
};
```
To explain the statement `if (mp.find(second) != mp.end())` visually, we’ll break it into its meaning and operation step-by-step. Here's what it does and how it can be visualized:

---

### **Purpose of `mp.find(second) != mp.end()`**
- `mp` is an **unordered_map** storing previously seen array elements as keys and their indices as values.
- `mp.find(second)`:
  - Searches for the `second` value (the complement of the current number) in the map.
  - **If found**, it returns an iterator pointing to the **key-value pair** where `second` exists.
  - **If not found**, it returns `mp.end()`, indicating that the key does not exist in the map.

- `mp.find(second) != mp.end()`:
  - Checks whether the `second` value exists in the map.
  - If `true`, it means we’ve already encountered a number in the array that adds up to the `target` when paired with the current number.

---

### **Visual Example:**
#### Input:
`nums = [2, 7, 11, 15], target = 9`  

#### Map Evolution:

| Iteration | Current Number (`arr[i]`) | Complement (`second = target - arr[i]`) | Map (`mp`)               | `mp.find(second)` Result |
|-----------|----------------------------|------------------------------------------|--------------------------|---------------------------|
| 1         | 2                          | `9 - 2 = 7`                              | `{2: 0}`                | `Not Found (mp.end())`    |
| 2         | 7                          | `9 - 7 = 2`                              | `{2: 0}`                | `Found (mp[2] = 0)`       |

---

#### **Step-by-Step Visualization**:

**Step 1**: At iteration `i = 1`, with `nums[1] = 7`:  
- Complement = `target - nums[1] = 9 - 7 = 2`.  
- Search for `2` in the map.

---

**Map Lookup (Visual)**:  
Think of the map as a key-value table:

| **Key (Element)** | **Value (Index)** |
|--------------------|-------------------|
| 2                  | 0                |

---

- `mp.find(2)` checks the table.
- Since `2` exists, `mp.find(2)` points to the entry `(2, 0)`.

---

**Step 2**: Check `mp.find(second) != mp.end()`:
- Since `mp.find(2)` is not `mp.end()`, it means `2` exists in the map.  

---

**Step 3**: Use the stored value:
- Retrieve the index of `2` (`mp[2] = 0`) and combine it with the current index `1` to form the result `[1, 0]`.

---

### **Diagram Representation**:
```plaintext
Array: [2, 7, 11, 15]
Target: 9

Map at i=1: { 2: 0 }

Current element: 7
Complement: 9 - 7 = 2

Map Lookup:
  ┌─────┐
  | Key | Value |
  |  2  |   0   |  <-- Found!
  └─────┘

Condition: mp.find(2) != mp.end() --> True

Result: Indices [1, 0]
```

This visual workflow shows how the map lookup helps locate a previously stored element that, combined with the current one, achieves the target sum.

Here's a step-by-step explanation of how the provided code works for solving the **Two Sum** problem:

---

## 🔥 Problem Statement Recap:
You need to find **two indices** in an array such that their corresponding elements add up to a given target. Each input guarantees exactly one solution.

- Input: `nums = [2,7,11,15], target = 9`

### Steps for Execution:

#### **Initialization**:
1. **`unordered_map<int, int> mp`**:  
   - This is used to store elements of the array (`arr[i]`) as keys and their indices as values for quick lookups.
   - `unordered_map` provides O(1) time complexity for lookup operations.

2. **`vector<int> ans`**:  
   - A vector to store the result indices once the pair is found.

---

#### **Iterate through the Array**:
The `for` loop iterates through the array, processing one element (`arr[i]`) at a time.

---

#### **For Each Element**:
**Step 1**:  
Calculate the "complement" of the current element `arr[i]` with respect to the target:  
```cpp
int second = target - arr[i];
```

**Step 2**:  
Check if the complement (`second`) exists in the map:  
```cpp
if (mp.find(second) != mp.end()) {
```
- If it exists, it means you've already seen the other number needed to form the target sum.  

**Step 3**:  
Add the indices of the current element (`i`) and the complement (`mp[second]`) to the result:  
```cpp
ans.push_back(i);
ans.push_back(mp[second]);
break;
```

**Step 4**:  
If the complement isn't found, add the current element and its index to the map:  
```cpp
mp[first] = i;
```
This ensures the current element is available for lookup when processing future elements.

---

#### **Return the Result**:
Once a pair is found, the loop exits, and the function returns the indices stored in `ans`.

---

### Example Execution:

#### **Example 1**:
Input: `nums = [2,7,11,15], target = 9`  
**Steps**:  
1. **Iteration 1 (`i=0`)**:  
   - `first = 2`, `second = 9 - 2 = 7`  
   - `7` is not in the map. Add `2` to the map: `mp = {2: 0}`.

2. **Iteration 2 (`i=1`)**:  
   - `first = 7`, `second = 9 - 7 = 2`  
   - `2` is in the map! Return `[1, 0]`.

Output: `[1, 0]` (or `[0, 1]` in any order).

---

#### **Example 2**:
Input: `nums = [3,2,4], target = 6`  
**Steps**:  
1. **Iteration 1 (`i=0`)**:  
   - `first = 3`, `second = 6 - 3 = 3`  
   - `3` is not in the map. Add `3` to the map: `mp = {3: 0}`.

2. **Iteration 2 (`i=1`)**:  
   - `first = 2`, `second = 6 - 2 = 4`  
   - `4` is not in the map. Add `2` to the map: `mp = {3: 0, 2: 1}`.

3. **Iteration 3 (`i=2`)**:  
   - `first = 4`, `second = 6 - 4 = 2`  
   - `2` is in the map! Return `[2, 1]`.

Output: `[2, 1]`.

---

#### **Example 3**:
Input: `nums = [3,3], target = 6`  
**Steps**:  
1. **Iteration 1 (`i=0`)**:  
   - `first = 3`, `second = 6 - 3 = 3`  
   - `3` is not in the map. Add `3` to the map: `mp = {3: 0}`.

2. **Iteration 2 (`i=1`)**:  
   - `first = 3`, `second = 6 - 3 = 3`  
   - `3` is in the map! Return `[1, 0]`.

Output: `[1, 0]`.

---

### Complexity Analysis:

1. **Time Complexity**:  
   - Iterating through the array: **O(n)**  
   - Lookup and insertion in the map: **O(1)** on average.  
   **Total**: **O(n)**.

2. **Space Complexity**:  
   - The map can hold at most `n` elements in the worst case.  
   **Total**: **O(n)**.

This makes the solution efficient and suitable for large inputs.


## LC-2965 Find Missing and Repeating valus