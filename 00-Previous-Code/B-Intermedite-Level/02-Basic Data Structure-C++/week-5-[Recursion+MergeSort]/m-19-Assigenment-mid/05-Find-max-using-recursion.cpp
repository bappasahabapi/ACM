#include<bits/stdc++.h>
using namespace std;

int findMax(int a[], int n)
{
    // base case
    if (n == 1) {
        return a[0];
    }
    // recursive case
    int maxElement = findMax(a, n - 1);
    if (a[n - 1] > maxElement)
    {
        return a[n - 1];
    } 
    else
    {
        return maxElement;
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int maxElement = findMax(a, n);
    cout << maxElement << endl;
    return 0;
}
