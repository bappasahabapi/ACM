```cpp
class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int st = 0; 
        int end = arr.size() - 1;

        while (st < end) { //change here
            int mid = st + (end - st) / 2;

            // Check if mid is part of an ascending slope or peak
            if (arr[mid] > arr[mid + 1]) {
                // Potential peak is on the left or mid itself
                end = mid;
            } else {
                // Potential peak is on the right
                st = mid + 1;
            }
        }

        // At the end of the loop, st == end, pointing to the peak index
        return st;
    }
};

```

Anothrer Solution


```cpp
class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int st = 0;
        int end = arr.size() - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            // Check if mid is a peak
            bool leftCondition = (mid == 0 || arr[mid] > arr[mid - 1]);
            bool rightCondition = (mid == arr.size() - 1 || arr[mid] > arr[mid + 1]);

            if (leftCondition && rightCondition) {
                return mid; // mid is a peak
            } 
            
            // If mid is not a peak, decide the direction
            if (mid > 0 && arr[mid - 1] > arr[mid]) {
                end = mid - 1; // Move to the left half
            } else {
                st = mid + 1; // Move to the right half
            }
        }

        return -1; // Should never reach here for a valid input
    }
};


```
