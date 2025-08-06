#include <bits/stdc++.h>
using namespace std;

vector<int> merge_sort(vector<int> a)
{
    //base case
    if(a.size()<=1){
        return a;
    }
    int mid = a.size()/2;
    // divide the vector into two parts
    vector<int> b, c;

    for(int i=0;i<mid;i++)
        b.push_back(a[i]);

    for(int i=mid;i<a.size();i++)
        c.push_back(a[i]);

    // now we get two sorted vectors
    // This is divide step
    vector<int> sorted_b = merge_sort(b);
    vector<int> sorted_c = merge_sort(c);

    // return sorted array stored in vector a
    vector<int> sorted_a;

    // initialize two indices
    int idx1 = 0;
    int idx2 = 0;

    // loop until we have merged all elements
    for(int i=0;i<a.size();i++)
    {
        // corner cases
        if(idx1==sorted_b.size()){
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
        else if(idx2==sorted_c.size()){
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        // check which element is smaller
        else if(sorted_b[idx1] < sorted_c[idx2]){
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else{
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
    }
    return sorted_a;
}

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++)
        cin>>a[i];

    vector<int> sorted_a = merge_sort(a);
    vector<int> unique_a;

    // add the first element to unique_a
    unique_a.push_back(sorted_a[0]);

    // iterate through the sorted array and add each unique element to unique_a
    for(int i=1; i<sorted_a.size(); i++){
        if(sorted_a[i] != sorted_a[i-1]){
            unique_a.push_back(sorted_a[i]);
        }
    }

    // print the unique elements in sorted order
    for(int i=0;i<unique_a.size();i++)
        cout<<unique_a[i]<<" ";
    cout<<"\n";
    return 0;
}
