#

- Using Binary Search
    -    Find the **mid =st+ (end-st)/2 **
    - Next check the mid with peak condition
        - left right;
        - arr[mid-1] < arr[mid] && arr[mid]> arr[mid+1] ;
Then Using BS concept for where shoud I next go either left or right par. Now


```c++


class Solution {
public:
    int peakIndexInMountainArray(vector<int>&arr) {
        // int st=0;
        // int end=arr.size()-1;
        int st=1;
        int end=arr.size()-2;

        while(st<=end){
            int mid =st + (end-st)/2;

            if(arr[mid-1]<arr[mid] && arr[mid]> arr[mid+1]){
                return mid;
            }
            // now desicide which part should I go left or right
            else if(arr[mid-1]<arr[mid]){
                //go left
                st=mid+1;
            }else{
                //go right
                end=mid-1;
            }
        }
        return -1;
    }
};

```


```javascript
var peakIndexInMountainArray = function(arr) {
    let st = 1; // Start at 0
    let end = arr.length - 2; // End at the last index

    while (st <= end) {
        let mid = Math.floor(st + (end - st) / 2); // Ensure mid is an integer

        // Check if mid is the peak
        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) {
            return mid;
        }

        // If the left part is ascending, move right
        if (arr[mid - 1] < arr[mid]) {
            st = mid + 1;
        } else {
            // Otherwise, move left
            end = mid - 1;
        }
    }
    return -1; // No peak found
};


```
