#include<bits/stdc++.h>
using namespace std;

int main()
 {
    // Input array
    int n;
    // cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    // cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++) 
    {
        cin >> arr[i];
    }

    // Input range to remove elements
    int a, b;
    // cout << "Enter the range (a to b) to remove elements: ";
    cin >> a >> b;

   // Remove elements from array
    for(int i = b + 1; i < n; i++) 
    {
         arr[i-(b - a + 1)] = arr[i];
    }
    n =n- (b - a + 1);

    // Print the resulting array
    // cout << "Array after removing elements: ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}