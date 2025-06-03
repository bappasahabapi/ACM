
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