



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