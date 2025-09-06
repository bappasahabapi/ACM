
// g++ -std=c++11 code.cpp -o code && ./code
// g++ -std=c++11 code.cpp && ./a.out




#include <iostream>
#include <vector>
using namespace std;

// todo:2 now if we get the sorted array then how we merge this.
void merge(vector<int> &arr, int st, int mid, int end)
{
    vector<int> temp;
    int i = st, j = mid + 1;

    // O(n)
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

    // remaining left side  //O(n)
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    // remaining right side  //O(n)
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


// //todo:1 divide until the arr size is  1
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

int main()
{
    vector<int> arr = {12, 31, 35, 8, 32, 17};
    mergeSort(arr, 0, arr.size() - 1);

    for (int val : arr)
        cout << val << " ";
    cout << endl;

    return 0;
}
