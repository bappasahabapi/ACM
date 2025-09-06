/* 
 Here i have two sorted array
vector<int>& nums1 -> first. m =number of elements
vector<int>& nums2 --> second, size is n = number of element

nums1 = [1,2,3,0,0,0], m=3
nums2 = [2,5,6], n=3

ans =[1,2,2,3,5,6] m+n =3+3=6

 while(i<m && j<n){.     // (i=0, m=3) || 0<3, 1<3, 2<3  && ( j=0,n=3). 0<3, 1<3, 2<3
    after these two conditon gets true then 
    compare 

    if(nums1[i]<nums2[j]){.                    || 1<2 yes then -> ans[0] =1
                // ans.push_back(nums1[i]);
                ans[k] =nums1[i];
                i++;
            }


 }

 */
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i =0; //left
        int j =0; //right

        vector<int> ans(m+n,0);  // final array size is m+n and assign all values to 0;
        int k =0; // this is for ans


        // as long as i have element in left and right array

        //Here the while loop done the merge job
        while(i<m && j<n){
            //compare and push to ans array which array value is smaller
            if(nums1[i]<nums2[j]){
                // ans.push_back(nums1[i]);
                ans[k] =nums1[i];
                i++;
            }
            else{
                ans[k]=nums2[j];
                j++;
            }

            k++;
        }
        // now check if any value miss or not after 

        while(i<m){
            ans[k]=nums1[i];
            i++;
            k++;
        }

        while(j<n){
            ans[k]=nums2[j];
            j++;
            k++;
        }

        nums1 =ans;
        
    }
};