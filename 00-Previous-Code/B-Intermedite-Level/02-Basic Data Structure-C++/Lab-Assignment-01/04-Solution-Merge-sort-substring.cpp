#include<bits/stdc++.h>
using namespace std;

vector<int> merge_sort(vector<int> ans) {
    //base case
    if(ans.size() <= 1) {
        return ans;
    }

    int midPoint = ans.size() / 2;

    // divide the vector into two parts
    vector<int> b;
    vector<int> c;

    // we have a loop which continues 0 to mid-1
    // we divide ans vector into two parts
    for(int i=0; i<midPoint; i++) {
        b.push_back(ans[i]);
    }

    for(int i=midPoint; i<ans.size(); i++) {
        c.push_back(ans[i]);
    }

    // now we get two sorted vectors
    // divide steps
    vector<int> sorted_b = merge_sort(b);
    vector<int> sorted_c = merge_sort(c);

    // conquer step:
    vector<int> sorted_ans;
    int index1 = 0;
    int index2 = 0;

    for(int i=0; i<ans.size(); i++) {
        // check the corner case
        if(index1 == sorted_b.size()) {
            sorted_ans.push_back(sorted_c[index2]);
            index2++;
        }
        else if(index2 == sorted_c.size()) {
            sorted_ans.push_back(sorted_b[index1]);
            index1++;
        }
        //-----
        else if(sorted_b[index1] < sorted_c[index2]) {
            sorted_ans.push_back(sorted_b[index1]);
            index1++;
        }
        else {
            sorted_ans.push_back(sorted_c[index2]);
            index2++;
        }
    }
    return sorted_ans;
}

bool isSubset(vector<int> arr1, vector<int> arr2) {
    // Sort both arrays using merge sort
    arr1 = merge_sort(arr1);
    arr2 = merge_sort(arr2);

    int i = 0, j = 0;
    while(i < arr1.size() && j < arr2.size()) {
        if(arr1[i] < arr2[j]) {
            i++;
        }
        else if(arr1[i] == arr2[j]) {
            i++;
        }
        else {
            j++;
        }
    }
    if(i == arr1.size()) {
        return true;
    }
    return false;
}

int main() {
    int n, m;
    cin >> n;
    vector<int> arr1(n);
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    cin >> m;
    vector<int> arr2(m);
    for(int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    if(isSubset(arr1, arr2)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}

