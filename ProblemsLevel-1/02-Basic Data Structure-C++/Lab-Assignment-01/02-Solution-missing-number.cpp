#include<bits/stdc++.h>
using namespace std;

int find_missing_number(vector<int>& a, int n) {
    int sum = 0;
    for(int i = 0; i < n-1; i++) {
        sum =sum+a[i];
    }
    int totalSum = (n * (n+1))/2; //todo: sum of first n natural numbers
    return totalSum - sum;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> a(n-1);
    cout << "Enter " << n-1 << " elements of the array: ";
    for(int i = 0; i < n-1; i++)
        cin >> a[i];

    int missing_number = find_missing_number(a, n);
    cout << "Missing number: " << missing_number;

    return 0;
}