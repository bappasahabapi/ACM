## Question:
`🔥 bit manipulation`

Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,1]
Output: 1
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4
Example 3:

Input: num s = [1]
Output: 1

```cpp
#include<iostream>
#include<vector>

using namespace std;

int singleNumber(vector<int> &nums){
    int ans = 0; // use only constant extra space.
    for(int value : nums){
        ans =ans ^ value  // 0 ^ 4 =1, 
    }

    return ans;

}

int main(){


}
```


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
