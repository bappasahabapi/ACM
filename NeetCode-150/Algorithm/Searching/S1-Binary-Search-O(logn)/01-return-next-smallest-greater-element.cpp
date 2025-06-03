#include<iostream>
#include<vector>

using namespace std;

// run the code 
// g++ -std=c++11 code.cpp -o code && ./code


int binarySearch(vector<int>arr, int tar){

    int st=0;
    int end=arr.size()-1;


    while(st<=end){
       int mid =st+(end-st)/2; // index of mid

        // check 
        if(tar>arr[mid]){ //go right
            st=mid+1;
        }
        else if(tar<arr[mid]){ //go left
            end=mid-1;
        }
        else{ // tar =arr[mid]
            return mid;
        }
    }
    return arr[st];
    // return -1;

};


int main(){

    vector<int> arr1 ={-1,0,3,4,5,9,12}; //odd
    int target1 =8;
    cout<<binarySearch(arr1,target1)<<endl;


    // vector<int> arr2 ={0,3,4,5,9,12}; //even
    // int target2 =12;
    // cout<<binarySearch(arr2,target2)<<endl;

    return 0;

    

}