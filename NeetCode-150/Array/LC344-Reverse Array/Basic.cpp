#include <iostream>
#include <vector>
// #include <bits/c++.h>
using namespace std;


void reverseArrayNumber(int arr[],int sz){
    int start =0;
    int end =sz-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    
    int arr []={4,5,6,7,8};
    int sz = 5;

    reverseArrayNumber(arr,sz);

    for (int i = 0; i < sz; i++){
        cout<<arr[i]<<" ";
    };
    cout<<endl;

    return 0;
};


//todo: reverse 
#include <iostream>
#include <vector>
using namespace std;

// Function to reverse an array of any type in place
template <typename T>
void reverseArray(vector<T>& arr) {
    int start = 0;
    int end = arr.size() - 1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int mainReverseArray() {

int main()
{

//   int biggest = - INFINITY =INT_MIN; 
    int nums[] ={5,6,8,9,-10,11,};
    int size =6;

    int biggest=INT_MIN;
    int bigIndex=-1;

    for(int i=0; i<size; i++){
        if(nums[i]>biggest){
            biggest=nums[i];
            bigIndex=i;
        }

    }
     cout << "The biggest number is " << biggest << " at index " << bigIndex << endl;

    
   

    return 0;
};
int bigIndex5()
{

//   int biggest = - INFINITY =INT_MIN; 
    int nums[] ={5,6,8,9,-10,11,};
    int size =6;

    int biggest=INT_MIN;
    int bigIndex=-1;

    for(int i=0; i<size; i++){
        if(nums[i]>biggest){
            biggest=nums[i];
            bigIndex=i;
        }

    }
     cout << "The biggest number is " << biggest << " at index " << bigIndex << endl;

    
   

    return 0;
};


int biggest4()
{

//   int biggest = - INFINITY =INT_MIN; 
    int nums[] ={5,6,8,9,-10,11,};
    int size =6;

    int biggest=INT_MIN;

    for(int i=0; i<size; i++){
        if(nums[i]>biggest){
            biggest=nums[i];
        }
    }
    cout<< biggest<<endl;
   

    return 0;
};

int smallest3()
{

//   int smallest =+ INFINITY =INT_MAX; 
    int nums[] ={5,6,8,9,-10,11,};
    int size =6;

    int smallest=INT_MAX;

    for(int i=0; i<size; i++){
        if(nums[i]<smallest){
            smallest=nums[i];
        }
    }
    cout<< smallest<<endl;
   

    return 0;
};

int printArray2(){

   int size =5;
   int marks[5];

   for(int i=0;i<size;i++){
    cin>> marks[i];
   }



    //   int marks[5]={0,1,2,3,4};
    //    int size =5;
   //print 0 to size-1
    for (int i=0; i<size; i++){
        cout<<marks[i]<<" ";
    }
    cout<<endl;
   

    return 0;
}

int main_1(){

   int marks[5]={0,1,2,3,4};

   
   cout<<marks[0] <<endl;
   cout<<marks[1] <<endl;

    int length = sizeof(marks) / sizeof(marks[0]);
    cout << "Length of the array: " << length << endl;




    return 0;
}


