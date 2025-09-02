```c++
class Solution {
public:
    int search(vector<int>&arr, int tar) {
        int st = 0;
        int end = arr.size() - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (tar == arr[mid]) {
                return mid;
            }

            // check which half sorted
            if (arr[st] <= arr[mid]) { // if left part is sorted
                // go left
                if ((arr[st] <= tar) && (tar <= arr[mid])) {
                    end = mid - 1;
                }else{
                    st=mid+1;
                }
            } 
            // if right sorted
            else {
                if((arr[mid]<=tar) && (tar <=arr[end])){
                    st=mid+1;
                }else{
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};
```

## Explanation

Here’s the iteration table based on the input `nums = [4,5,6,7,0,1,2]` and `target = 0`:

| **Iteration** | **Start (`st`)** | **End (`end`)** | **Mid (`mid`)** | **Value at `arr[mid]`** | **Comparison**                  | **Action**             |
|---------------|------------------|-----------------|-----------------|-------------------------|---------------------------------|------------------------|
| 1             | 0                | 6               | 3               | 7                       | `target < arr[mid]`             | Move `st` to `mid + 1` (`st = 4`) |
| 2             | 4                | 6               | 5               | 1                       | `target < arr[mid]`             | Move `end` to `mid - 1` (`end = 4`) |
| 3             | 4                | 4               | 4               | 0                       | `target == arr[mid]` (Found)    | Return `mid = 4`       |

---

### Explanation:

1. **Initial Values**:
   - `st = 0`, `end = 6` (entire array is considered).
   - `mid = (st + end) / 2 = 3`. `arr[mid] = nums[3] = 7`.

2. **Iteration 1**:
   - Compare `target` (0) with `arr[mid]` (7): `target < arr[mid]`.
   - Since the left part `[4, 5, 6, 7]` is sorted, but `target` is not in this range, move to the right part: set `st = mid + 1 = 4`.

3. **Iteration 2**:
   - `st = 4`, `end = 6`. Recalculate `mid = (st + end) / 2 = 5`. `arr[mid] = nums[5] = 1`.
   - Compare `target` (0) with `arr[mid]` (1): `target < arr[mid]`.
   - The left part `[0, 1]` is sorted, and `target` lies within this range, so move to the left: set `end = mid - 1 = 4`.

4. **Iteration 3**:
   - `st = 4`, `end = 4`. Recalculate `mid = (st + end) / 2 = 4`. `arr[mid] = nums[4] = 0`.
   - Compare `target` (0) with `arr[mid]` (0): `target == arr[mid]`.
   - Target is found, return `mid = 4`.

---

### Result:
The target `0` is found at index `4`.

