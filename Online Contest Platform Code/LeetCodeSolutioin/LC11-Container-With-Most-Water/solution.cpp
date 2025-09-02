#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// using Two pointer approach O(n)

int maxArea(vector<int>& height)
{
    int maxWater =0;
    int lp=0;
    int rp=height.size()-1;

    while(lp<rp){
       int w = rp-lp;
       int ht =min(height[lp],height[rp]);
       int currWater =w * ht;
        maxWater =max(currWater,maxWater);
        // if(height[lp]<height[rp]){
        //     lp++;
        // }
        // if(height[lp]>height[rp]){
        //     rp--;
        // }
        height[lp]<=height[rp] ? lp++ : rp--;
    }
    return maxWater;     
}

int main()
{
    vector<int> height ={1, 8, 6, 2, 5, 4, 8, 3, 7}


}





// // using brute force

// int maxArea(vector<int>& height)
// {
//     int maxWater =0; //ans

//     // this is for left 
//     for(int i =0;i<height.size();i++){
//         //this is for right
//         for(int j =0; j<height.size();j++){
//            int width=j-i;
//            int height =min(height[i],height[j]);
//            int currWater =width*height;

//            maxWater=max(currWater,maxWater);
//         }
//     }
//     return maxWater;
        
// }