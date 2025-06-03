Let’s break down how these two lines work in the context of the problem and why they are crucial for finding the **maximum product subarray**, especially when encountering a negative number.

---

### 1. **Handling Negative Numbers with `swap(currMax, currMin)`**

#### Why It’s Necessary:

When a negative number is encountered, the role of the **maximum product** (`currMax`) and **minimum product** (`currMin`) flips. This is because multiplying by a negative number reverses the sign:

- A **large positive number** (previous `currMax`) becomes a **large negative number**.
- A **small negative number** (previous `currMin`) becomes a **large positive number**.

#### What Happens:

When a negative number is encountered:

- Swap `currMax` and `currMin` because the maximum product can now come from what was previously the minimum product, and vice versa.

---

### 2. **Updating `maxSum` with `maxSum = max(maxSum, currMax)`**

#### Why It’s Necessary:

- `maxSum` keeps track of the **global maximum product** found so far.
- At each step, `currMax` represents the maximum product of a subarray that ends at the current element.
- Therefore, compare the current `currMax` with `maxSum` to update the global maximum product.

---

### How They Work Together (Step-by-Step):

#### Input: `nums = [2, 3, -2, 4]`

| Index | Value | Before Swap (`currMax`, `currMin`) | After Swap (`currMax`, `currMin`) | Updated `currMax` and `currMin` | `maxSum` Update           |
| ----- | ----- | ---------------------------------- | --------------------------------- | ------------------------------- | ------------------------- |
| 0     | 2     | (1, 1)                             | N/A                               | (`2`, `2`)                      | `maxSum = max(-∞, 2) = 2` |
| 1     | 3     | (2, 2)                             | N/A                               | (`6`, `3`)                      | `maxSum = max(2, 6) = 6`  |
| 2     | -2    | (6, 3)                             | (3, 6)                            | (`-2`, `-12`)                   | `maxSum = max(6, -2) = 6` |
| 3     | 4     | (-2, -12)                          | N/A                               | (`4`, `-48`)                    | `maxSum = max(6, 4) = 6`  |

---

#### Input: `nums = [-2, 0, -1]`

| Index | Value | Before Swap (`currMax`, `currMin`) | After Swap (`currMax`, `currMin`) | Updated `currMax` and `currMin` | `maxSum` Update             |
| ----- | ----- | ---------------------------------- | --------------------------------- | ------------------------------- | --------------------------- |
| 0     | -2    | (1, 1)                             | (1, 1)                            | (`-2`, `-2`)                    | `maxSum = max(-∞, -2) = -2` |
| 1     | 0     | (-2, -2)                           | N/A                               | (`0`, `0`)                      | `maxSum = max(-2, 0) = 0`   |
| 2     | -1    | (0, 0)                             | (0, 0)                            | (`-1`, `-1`)                    | `maxSum = max(0, -1) = 0`   |

---

### Key Observations:

- **`swap(currMax, currMin)`**:
  - At index `2` in `[2, 3, -2, 4]`, when the value is `-2`, swapping is necessary because `currMax` would otherwise incorrectly continue as a positive number.
- **`maxSum = max(maxSum, currMax)`**:
  - Ensures the global maximum is updated only when a valid subarray produces a larger product.

These lines work together to ensure the algorithm accounts for the effects of negative numbers and always tracks the largest possible product.


```cpp
class Solution {
public:
    int maxProduct(vector<int>& nums) {


    int currMax = 1; // Tracks the maximum product at the current position
        int currMin = 1; // Tracks the minimum product at the current position
        int maxSum = INT_MIN; // Global maximum product

        for (int value : nums) {
            if (value < 0) {
                // Swap currMax and currMin when encountering a negative number
                swap(currMax, currMin);
            }

            // Update currMax and currMin with the current value
            currMax = max(value, currMax * value);
            currMin = min(value, currMin * value);

            // Update the global maximum product
            maxSum = max(maxSum, currMax);

            // Reset to handle zeros
            if (value == 0) {
                currMax = 1;
                currMin = 1;
            }
        }

        return maxSum;
    }
    
};

```