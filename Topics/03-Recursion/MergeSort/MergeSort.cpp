
// // g++ -std=c++11 code.cpp -o code && ./code
// // g++ -std=c++11 code.cpp && ./a.out

// https://leetcode.com/problems/sort-an-array/


#include <iostream>
#include <vector>
using namespace std;

// todo:2 now if we get the sorted array then how we merge this.
void merge(vector<int> &arr, int st, int mid, int end)
{
    vector<int> temp;
    int i = st, j = mid + 1;

    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // remaining left side
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    // remaining right side
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    // copy back to original array
    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[st + idx] = temp[idx];
    }
}


//todo:1 divide until the arr size is  1
void mergeSort(vector<int> &arr, int st, int end)
{
    
    if (st < end)
    {
        int mid = st + ((end - st) / 2);
        mergeSort(arr, st, mid);      // left part
        mergeSort(arr, mid + 1, end); // right part

        merge(arr, st, mid, end);
    }
}

// todo: Used approach: where we do not pass any start and end index

vector<int> mergeSortAlgo(vector<int> &arr){

    //todo1: dived and sort phase
    //check the base case : 
    if(arr.size()<=1) return arr;

    //otherwise divided the array into two parts;
    vector<int> left;
    vector<int> right;
    int mid =arr.size()/2; 

    // next we need to store the divided value in two sub array 
    // for left part the range will be 0 to mid-1
    for(int i =0; i<mid;i++){
        left.push_back(arr[i]);
    }

    //store the right part start= mid to end= n-1
    for(int j =mid; j<arr.size(); j++){
        right.push_back(arr[j]);
    }


    // next we need to calculate the ans both for left and right side
    //sorted ans will store here
    vector<int>sorted_Left= mergeSortAlgo(left); // this will provides the sorted left part of the array
    vector<int>sorted_Right=mergeSortAlgo(right);

    // todo2: conqure or merge phase


    vector<int> ans ;
    int index_left=0;
    int index_right=0;
    for(int i=0; i<arr.size(); i++){

        //handle the corner case: 
        // simply means the idexed reached the last start=end : all elements are taken from left arr
        if(index_left==sorted_Left.size()){
            ans.push_back(sorted_Right[index_right]); // push all element of right to the ans vector
            index_right++;
        }
        else if (index_right ==sorted_Right.size()){
            ans.push_back(sorted_Left[index_left]);
            index_left++;
        }
        
        //compare which one is smaller: if left smaller push left to ans arr otherwise push right to ans array
        else if (sorted_Left[index_left]< sorted_Right[index_right] ){
            ans.push_back(sorted_Left[index_left]);
            index_left++;
        }
        else{
            ans.push_back(sorted_Right[index_right]); 
            index_right++;
        }
    }
    return ans;
}



int main()
{
    vector<int> arr = {12, 31, 35, 8, 32, 17};
    // mergeSort(arr, 0, arr.size() - 1);

    
    // for (int val : arr)
    //     cout << val << " ";
    // cout << endl;

    vector<int>ans = mergeSortAlgo(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}
