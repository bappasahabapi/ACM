#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// using moores algorithm

int majorityElement(vector<int> &nums)
{
    int n =nums.size();

    int frequency =0;
    int ansElement =0;

    for (int i = 0; i < n; i++)
    {
        if(frequency == 0){
            ansElement =nums[i]; // 0->11;
        }
        //same element
        if(ansElement ==nums[i]){ //11 == 11
            frequency++;  // 0->1;
        }else{
            frequency--;
        }
    }
    return -1; //11
    // return ansElement; //11
        
}

int main()
{
    // mj > n/2
    vector<int> nums = {1,2};
    cout << "Majority Element: " << majorityElement(nums) << endl;

    return 0;
}
