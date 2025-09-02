//reduce space complexity

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n =nums.size();
        vector <int> ans(n,1); //default value 1

        //prefix
        for(int i =1;i<n; i++){
            // prefix[i]=prefix[i-1]*nums[i-1];
            ans[i]=ans[i-1]*nums[i-1];
        }

        //suffix
        int suffix =1;
        for(int i=n-2; i>=0; i--){
            suffix =suffix * nums[i+1];
            ans[i]=suffix * ans[i];
        }
        return ans;
    }
};