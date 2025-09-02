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