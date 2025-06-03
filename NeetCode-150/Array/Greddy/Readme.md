# LeetCode 53

- First step to prinit all  possible subarrays 0(n3)

```cpp
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};


    //O(n3)
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout << arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}

// output

❯ g++ -std=c++11 LC-53-Maximum-Sub-Array.cpp && ./a.out
1 12 123 1234 12345 
2 23 234 2345 
3 34 345 
4 45 
5 

```
- Brute Force `maximum subarray sum` 0 (n2)

{3,-4,5,4,-1,7,-8}

```cpp
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    int maxSum = INT_MIN;

    // O(n)
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


// output

Maximum Sum of subarray: 15

```


