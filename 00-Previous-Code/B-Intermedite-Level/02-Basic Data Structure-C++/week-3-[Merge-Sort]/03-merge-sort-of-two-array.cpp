#include<bits/stdc++.h>
using namespace std;

vector<int> merge_sort(vector<int>a)
{
    //base case
    if(a.size()<=1){
        return a;
    }
    int mid =a.size()/2;
    // we have a loop which continues 0 to mid-1
    // divide the vector into two parts
    vector<int>b;
    vector<int>c;

    for(int i=0;i<mid;i++)
        b.push_back(a[i]);

    for(int i=mid;i<a.size();i++)
        c.push_back(a[i]);
    
    //  now we get two sorted vectors
    // This is divide step
    vector<int>sorted_b=merge_sort(b);
    vector<int>sorted_c=merge_sort(c);

    // return sorted array is stored in vector a
    vector<int> sorted_a;

    // Next we take two indices and both are pointed at index 0
    int idx1 =0;
    int idx2 =0;

    // next the loop will run the vector size of a;
    for(int i=0;i<a.size();i++)
    {
        //corner case
        if(idx1==sorted_b.size()){
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
        else if(idx2==sorted_c.size()){
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        // ---------
        else if(sorted_b[idx1]>sorted_c[idx2])
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
    }
    return sorted_a;
}

int main()
{
    int n, m;
    cout<<"Enter first array size: "<<endl;

    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    cout<<"Enter first array size: "<<endl;
    
    cin >> m;
    vector<int> b(m);
    for(int i=0;i<m;i++){
        cin >> b[i];
    }

    vector<int> merged = merge_sort(a);

    // Append elements of b to the end of merged
    for(int i=0;i<m;i++){
        merged.push_back(b[i]);
    }

    // Sort the merged array in non-increasing order
    sort(merged.begin(), merged.end(), greater<int>());

    // Print the merged array
    for(int i=0;i<merged.size();i++){
        cout<<merged[i]<<" ";
    }
    return 0;
}
