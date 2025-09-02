#include<bits/stdc++.h>
using namespace std;

int merge_sort(vector<int>& arr, int low, int high, int k) {
    //base case
    if(low == high) {
        return 0;
    }

    int midPoint = (low + high) / 2;

    // divide the array into two parts
    int count = merge_sort(arr, low, midPoint, k);
    count += merge_sort(arr, midPoint + 1, high, k);

    // now we get two sorted arrays
    // conquer step:
    int i = low;
    int j = midPoint + 1;
    while(i <= midPoint && j <= high) {
        if(arr[i] + arr[j] == k) {
            count++;
            i++;
            j++;
        }
        else if(arr[i] + arr[j] < k) {
            i++;
        }
        else {
            j++;
        }
    }

    // merge step:
    sort(arr.begin() + low, arr.begin() + high + 1);
    return count;
}

int main() {
    int n, k;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> k;

    int count = merge_sort(arr, 0, n-1, k);
    cout << count << endl;

    return 0;
}
