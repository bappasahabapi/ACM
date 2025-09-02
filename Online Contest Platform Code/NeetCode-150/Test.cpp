#include<iostream>
#include<vector>

using namespace std;

// run the code 
// g++ -std=c++11 code.cpp -o code && ./code



int main(){

    int arr[] ={-18,-12,-4, 0,2,3,4,15,16,17,22,39,50,};

    int tar= 22;

    int st=0;
    int end=arr.length -1;

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



// #include<iostream>
// #include<vector>

// using namespace std;


// int main(){
//     int n=5;
//     int i=-1;
//     if(i>1){
//         // return i;
//         cout<<"greater than 1"<<endl;
//     }
//      if(i>15){
//         cout<<"greater than 15"<<endl;
//         // return i;
//     }
//     else{
//         cout<<"less than 1"<<endl;
//     }

//     return 0;
// }

