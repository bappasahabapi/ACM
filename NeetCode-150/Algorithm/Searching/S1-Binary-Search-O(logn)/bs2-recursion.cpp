#include<iostream>
#include<vector>

using namespace std;

// run the code 
// g++ -std=c++11 code.cpp -o code && ./code


int recBinSearch(vector<int>arr, int tar,int st,int end){

    if(st<=end){
        int mid =st+(end-st)/2;

        if(tar>arr[mid]){ //go right
            return recBinSearch(arr,tar,mid+1,end);
        }else if(tar<arr[mid]){
            return recBinSearch(arr,tar,st,mid-1);
        }else{
            return mid;
        }
    }
    return -1;
};


int main(){

    vector<int> arr1 ={-1,0,3,4,5,9,12}; //odd
    int target1 =0;
    cout<<recBinSearch(arr1,target1)<<endl;


    return 0;

    

}