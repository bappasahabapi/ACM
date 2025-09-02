// ❯ g++ -std=c++11 solution.cpp && ./a.out

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0; i<arr.size();i++ ){
            int first =arr[i];
            int second =target -arr[i];

            if(mp.find(second) != mp.end()){
                ans.push_back(i);
                ans.push_back(mp[second]);
                break;
            }

            mp[first] =i;
        }
        return ans;
    }
};