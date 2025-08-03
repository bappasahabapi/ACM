
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
