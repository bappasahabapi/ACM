## Revision:

1.Swap two numbers: 
    -`swap(a,b)` -> This function returns the swap values;
    -`XOR `> a^a =0, a^b =1; [**LeetCode-136:** used for single unique number] 
    
    4^4 =0, same element retuns 0;
    4^2 =1,
    1^1 =0,
    0^0 =0,
    


- **LeetCode-136:** [Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.]

```cpp
int singleNumber(vector<int> &nums){
    int ans = 0; // use only constant extra space.
    for(int value : nums){
        ans =ans ^ value ; // 0 ^ 4 =1, 
    }

    return ans;

}
```