// g++ -std=c++11 LC-53-Maximum-Sub-Array.cpp && ./a.out

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 7;
    int arr[7] = {3,-4,5,4,-1,7,-8};
    // int n = 5;
    // int arr[5] = {1, 2, 3, 4, 5};

    int maxSum = INT_MIN;

    // O(n2)
    for (int start = 0; start < n; start++)
    {
        int currSum = 0;
        for (int end = start; end < n; end++)
        {
            currSum = currSum + arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout <<"Maximum Sum of subarray: "<< maxSum << endl;

    return 0;
}