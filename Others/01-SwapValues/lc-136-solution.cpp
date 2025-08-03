/* 

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

*/

#include<iostream>

// g++ -std=c++11 code.cpp -o code && ./code
#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int ans = 0; // use only constant extra space.
    for (int value : nums)
    {
        ans = value ^ ans;
    }

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     ans = ans ^ nums[i];
    // }

    return ans;
}

int main()
{

    vector<int> nums = {1, 1, 3, 5, 4, 5, 4};
    cout << singleNumber(nums) << endl;

    return 0;
}
