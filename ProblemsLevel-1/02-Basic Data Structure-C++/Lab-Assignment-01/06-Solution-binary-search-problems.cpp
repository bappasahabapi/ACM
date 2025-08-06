#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int k) {
    int left = 0, right = n-1;
    while(left <= right) {
        int mid = left + (right-left)/2;
        if(arr[mid] == k) {
            return mid;
        }
        else if(arr[mid] < k) {
            left = mid+1;
        }
        else {
            right = mid-1;
        }
    }
    return -1; // element not found
}

int main() {
    // Input array
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array (in increasing order): ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    // Input integer k
    int k;
    cout << "Enter the integer k: ";
    cin >> k;

    // Check if k occurs multiple times in the array using binary search
    int first_occurrence = binary_search(arr, n, k);
    int last_occurrence = binary_search(arr, n, k+1) - 1;
    if(first_occurrence != -1 && last_occurrence != -1 && first_occurrence != last_occurrence) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
