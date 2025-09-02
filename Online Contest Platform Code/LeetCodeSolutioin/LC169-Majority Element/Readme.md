



Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.



Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2

##    Using brute force 

```cpp

#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    for (int val : nums)
    {
        int frq = 0;
        for (int el : nums)
        {
            if (el == val)
            {
                frq = frq + 1;
            }
        };

        if (frq > n / 2)
            return val;
        
    };
    return -1;

};

int main()
{

    // mj > n/2
    // vector<int> nums = {1, 2, 1, 1, 4, 5};
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout<<majorityElement(nums)<<endl;


    return 0;
}

```

