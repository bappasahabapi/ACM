// first implement sorting 
// frequency couting

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int majorityElement(vector<int> &nums)
{
    int n =nums.size();
    // Perform sorting
    sort(nums.begin(), nums.end());

    //loop for frequency count
    int f =1;
    int ansElement = nums[0]; // this is the index of the sorted element
    for(int i=0+1;i<n;i++){
        if(nums[i] ==nums[i-1]){
            f++;
        }else{
            f =1; //reset the frequency count;
            ansElement=nums[i]; 
        }

        //after update frequency 
        if(f>n/2){
            return ansElement; //;
        }
    }
    return ansElement;

}

int main()
{
    // mj > n/2
    vector<int> nums = {2,2, 1, 1, 1, 2, 2};
    cout << "Majority Element: " << majorityElement(nums) << endl;

    return 0;
}
