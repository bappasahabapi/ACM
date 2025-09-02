#include<iostream>
#include<vector>

using namespace std;

// run the code 
// g++ -std=c++11 code.cpp -o code && ./code



int main(){

while(st<=end){
    int mid =st+(end-st)/2;

    if(tar=arr[mid]) return mid;

    //Run Left part if
    if(arr[st]<arr[mid]){
        if(arr[st]<tar<arr[mid]){ // search left
            end=mid-1;
        }else{ //search right
            st=mid+1;
        }
    }
    // Run Right part if left not matched
    else{
        if(arr[mid]<=target <=arr[end]){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
}


    return 0;

    

}