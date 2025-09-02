## Brute Force Approach O(n)


As this is sorted array simply apply binary search

in brute force approach we can simply use two pointer 

-   if (tar == arr[st]) return ans st; else { st++}
- else if (tar == arr[end]) return end ; else {end --}

## Optimization


--------------- Basic Code -------

        int st=0;
        int end=arr.size()-1;

        while(st<=end){
            int mid =st + (end-st)/2;

           if(tar>arr[mid]){
                st=mid+1;
            }else if(tar<arr[mid]){
                end=mid-1;
            }
            else{
                return mid
            }
        }

        return -1

--------------------------------

/*
    As this is sorted array simply apply binary search
    in brute force approach we can simply use two pointer
    -   if (tar == arr[st]) return ans st; else { st++}
    - else if (tar == arr[end]) return end ; else {end --}

 */

//  Optimized
/*  we can applied two times binary search
 first for finding the start and second for end

 - Now find first occurance of 8

 */

```cpp


class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int tar) {

      vector <int> inititalAns = {-1, -1};

        // check for first occurance if target is first
        int st =searchIndex(arr,  tar , true); //  Find the starting index
        int end =searchIndex(arr, tar , false);  // Find the ending index

        inititalAns[0]=st;
        inititalAns[1]=end;


        return inititalAns;


    }

    // this function just returns the index value of target

    int searchIndex(vector<int>& arr, int tar, bool findStartIndex) {
        int ans =-1;
        int st = 0;
        int end = arr.size() - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (tar > arr[mid]) {
                st = mid + 1;
            } else if (tar < arr[mid]) {
                end = mid - 1;
            } else {
                // potential ans found
                ans =mid;
                if(findStartIndex){
                    end=mid-1;
                }else{
                    st=mid+1;
                }
            }
        }
        return ans;
    }
};

```
