#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();

    //perform the sort on nums array ans then implemnt the pointer concept
    //here sorting is missing.


    // implement using two pointer concept.
    int str = 0, end = n - 1;
    while (str < end)
    {
        int pairSum = (nums[str] + nums[end]);
        if (pairSum > target)
        {
            end--;
        }
        else if (pairSum < target)
        {
            str++;
        }
        else
        {
            ans.push_back(str);
            ans.push_back(end);


            return ans;
        }
    }
    return ans;
};

int main()
{

    vector<int> nums = {3,2,4};
    int target = 6;

    vector<int> ans = twoSum(nums, target);
    cout << ans[0] << "," << ans[1] << endl;

    return 0;
}