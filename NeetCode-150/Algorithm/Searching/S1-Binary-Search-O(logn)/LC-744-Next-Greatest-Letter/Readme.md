Solution:


```cpp
class Solution {
public:
    char nextGreatestLetter(vector<char>& arr, char tar) {
        int st = 0;
        int end = arr.size() - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2; // index of mid

            // Check where to move
            if (tar >= arr[mid]) { // Go right if the target is greater or equal
                st = mid + 1;
            } else { // Go left
                end = mid - 1;
            }
        }

        // Wrap around using modulo to handle the case where all letters are smaller than target
        return arr[st % arr.size()];
        // return -1 
    }
};

```

```javascript

/**
 * @param {character[]} arr
 * @param {character} target
 * @return {character}
 */
var nextGreatestLetter = function(arr, tar) {
    let st =0;
    let end =arr.length-1;

    //when the condition break the the result we get in corner case
    while(st<=end){
        let mid =(st+(end-st)/2);

        if(tar>=arr[mid]){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    return arr[ st % arr.length];

};

```


