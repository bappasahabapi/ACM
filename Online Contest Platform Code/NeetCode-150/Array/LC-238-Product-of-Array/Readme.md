## First approach

```cpp
//  Using Nested Loop ) O(n^2)


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n =nums.size();
        vector <int> ans(n,1);

        for(int i=0;i<n;i++){
            int product=1;
            for(int j=0;j<n;j++){
                if(i!=j){
                    product *=nums[j];
                }
                
            }
            ans[i]=product;
        }
        return ans;
    }
};

```
###    Explanation: 

The function `productExceptSelf` calculates the product of all elements in the input array `nums` except the element at the current index, using a nested loop. Here's a detailed explanation of each iteration, step by step, in a table format:

### Input: `nums = [1, 2, 3, 4]`
### Output: `[24, 12, 8, 6]`

---

### Iteration Table
| Outer Loop (`i`) | Inner Loop (`j`) | `product` (Cumulative for all `j != i`) | `ans[i]` after inner loop |
|-------------------|------------------|----------------------------------------|---------------------------|
| **i = 0**         | j = 0 (skipped) | -                                      | -                         |
|                   | j = 1           | `product = 1 * 2 = 2`                  | -                         |
|                   | j = 2           | `product = 2 * 3 = 6`                  | -                         |
|                   | j = 3           | `product = 6 * 4 = 24`                 | `ans[0] = 24`             |
| **i = 1**         | j = 0           | `product = 1 * 1 = 1`                  | -                         |
|                   | j = 1 (skipped) | -                                      | -                         |
|                   | j = 2           | `product = 1 * 3 = 3`                  | -                         |
|                   | j = 3           | `product = 3 * 4 = 12`                 | `ans[1] = 12`             |
| **i = 2**         | j = 0           | `product = 1 * 1 = 1`                  | -                         |
|                   | j = 1           | `product = 1 * 2 = 2`                  | -                         |
|                   | j = 2 (skipped) | -                                      | -                         |
|                   | j = 3           | `product = 2 * 4 = 8`                  | `ans[2] = 8`              |
| **i = 3**         | j = 0           | `product = 1 * 1 = 1`                  | -                         |
|                   | j = 1           | `product = 1 * 2 = 2`                  | -                         |
|                   | j = 2           | `product = 2 * 3 = 6`                  | -                         |
|                   | j = 3 (skipped) | -                                      | `ans[3] = 6`              |

---

### Explanation of Each Step:
1. **Outer Loop `i`**: Determines which element to exclude from the product.
2. **Inner Loop `j`**: Multiplies all elements except `nums[i]`.
3. **`product`**: A temporary variable accumulates the product of all elements except the current one (`i`).
4. **`ans[i]`**: Stores the final product for each index.

---

### Final Output:
After completing all iterations:
- `ans = [24, 12, 8, 6]`




## Optimize Approach

```cpp
//  Using Nested Loop ) O(n^2)


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n =nums.size();
        vector <int> ans(n,1); //default value 1
        vector <int> prefix(n,1);
        vector <int> suffix(n,1);

        //prefix
        for(int i =1;i<n; i++){
            prefix[i]=prefix[i-1]*nums[i-1];
        }

        //suffix
        for(int i=n-2; i>=0; i--){
            suffix[i] =suffix[i+1]*nums[i+1];
        }

        for(int i =0; i<n;i++){
            ans[i]=prefix[i]*suffix[i];
        }

        return ans;
    }
};
```
### Explanation

The solution is based on calculating the product of elements using **prefix** and **suffix** arrays instead of a nested loop, which improves efficiency. Here's the detailed iteration process in a table format for the input `nums = [1, 2, 3, 4]`.

---

### Input: `nums = [1, 2, 3, 4]`
### Output: `[24, 12, 8, 6]`

---

### Step 1: Initialize Arrays
| Index | `nums` | `prefix` | `suffix` | `ans` |
|-------|--------|----------|----------|-------|
| 0     | 1      | 1        | 1        | 1     |
| 1     | 2      | 1        | 1        | 1     |
| 2     | 3      | 1        | 1        | 1     |
| 3     | 4      | 1        | 1        | 1     |

---

### Step 2: Compute `prefix` Products
| Iteration (`i`) | `prefix[i] = prefix[i-1] * nums[i-1]` | Updated `prefix` |
|------------------|--------------------------------------|------------------|
| `i = 1`          | `prefix[1] = 1 * 1 = 1`             | `[1, 1, 1, 1]`   |
| `i = 2`          | `prefix[2] = 1 * 2 = 2`             | `[1, 1, 2, 1]`   |
| `i = 3`          | `prefix[3] = 2 * 3 = 6`             | `[1, 1, 2, 6]`   |

---

### Step 3: Compute `suffix` Products
| Iteration (`i`) | `suffix[i] = suffix[i+1] * nums[i+1]` | Updated `suffix` |
|------------------|--------------------------------------|------------------|
| `i = 2`          | `suffix[2] = 1 * 4 = 4`             | `[1, 1, 4, 1]`   |
| `i = 1`          | `suffix[1] = 4 * 3 = 12`            | `[1, 12, 4, 1]`  |
| `i = 0`          | `suffix[0] = 12 * 2 = 24`           | `[24, 12, 4, 1]` |

---

### Step 4: Compute Final `ans` Array
| Iteration (`i`) | `ans[i] = prefix[i] * suffix[i]` | Updated `ans`  |
|------------------|---------------------------------|----------------|
| `i = 0`          | `ans[0] = 1 * 24 = 24`         | `[24, 1, 1, 1]`|
| `i = 1`          | `ans[1] = 1 * 12 = 12`         | `[24, 12, 1, 1]`|
| `i = 2`          | `ans[2] = 2 * 4 = 8`           | `[24, 12, 8, 1]`|
| `i = 3`          | `ans[3] = 6 * 1 = 6`           | `[24, 12, 8, 6]`|

---

### Final Output:
The `ans` array after all computations:  
`[24, 12, 8, 6]`

---

### Summary of Arrays:
| Index | `nums` | `prefix` | `suffix` | `ans` |
|-------|--------|----------|----------|-------|
| 0     | 1      | 1        | 24       | 24    |
| 1     | 2      | 1        | 12       | 12    |
| 2     | 3      | 2        | 4        | 8     |
| 3     | 4      | 6        | 1        | 6     |




### Most Optimized


```cpp
//reduce space complexity

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n =nums.size();
        vector <int> ans(n,1); //default value 1

        //prefix
        for(int i =1;i<n; i++){
            ans[i]=ans[i-1]*nums[i-1];
        }

        //suffix
        int suffix =1;
        for(int i=n-2; i>=0; i--){
            suffix =suffix * nums[i+1];
            ans[i]=suffix * ans[i];
        }
        return ans;
    }
};

```



Here’s a detailed iteration table for the optimized solution with reduced space complexity. This version eliminates the need for separate `prefix` and `suffix` arrays, storing the prefix products directly in the `ans` array and calculating the suffix product on the fly.

---

### Input: `nums = [1, 2, 3, 4]`
### Output: `[24, 12, 8, 6]`

---

### Step 1: Initialize Arrays
| Index | `nums` | `ans` (initialized to `1`) | `suffix` |
|-------|--------|----------------------------|----------|
| 0     | 1      | 1                          | -        |
| 1     | 2      | 1                          | -        |
| 2     | 3      | 1                          | -        |
| 3     | 4      | 1                          | -        |

---

### Step 2: Compute Prefix Products and Store in `ans`
| Iteration (`i`) | Calculation (`ans[i] = ans[i-1] * nums[i-1]`) | Updated `ans`       |
|------------------|----------------------------------------------|---------------------|
| `i = 1`          | `ans[1] = 1 * 1 = 1`                        | `[1, 1, 1, 1]`      |
| `i = 2`          | `ans[2] = 1 * 2 = 2`                        | `[1, 1, 2, 1]`      |
| `i = 3`          | `ans[3] = 2 * 3 = 6`                        | `[1, 1, 2, 6]`      |

---

### Step 3: Compute Suffix Products and Update `ans`
| Iteration (`i`) | Calculation (`suffix *= nums[i+1]`, `ans[i] *= suffix`) | `suffix` | Updated `ans`       |
|------------------|--------------------------------------------------------|----------|---------------------|
| `i = 2`          | `suffix = 1 * 4 = 4`, `ans[2] = 2 * 4 = 8`             | `4`      | `[1, 1, 8, 6]`      |
| `i = 1`          | `suffix = 4 * 3 = 12`, `ans[1] = 1 * 12 = 12`          | `12`     | `[1, 12, 8, 6]`     |
| `i = 0`          | `suffix = 12 * 2 = 24`, `ans[0] = 1 * 24 = 24`         | `24`     | `[24, 12, 8, 6]`    |

---

### Final Output:
The final `ans` array after all computations:  
`[24, 12, 8, 6]`

---

### Summary of Arrays:
| Index | `nums` | `ans` (prefix + suffix) | `suffix` |
|-------|--------|-------------------------|----------|
| 0     | 1      | 24                      | 24       |
| 1     | 2      | 12                      | 12       |
| 2     | 3      | 8                       | 4        |
| 3     | 4      | 6                       | 1        |

---

This approach maintains **O(n)** time complexity and **O(1)** space complexity (disregarding the input/output arrays).