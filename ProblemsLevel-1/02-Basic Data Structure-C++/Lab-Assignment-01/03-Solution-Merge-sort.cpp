#include<bits/stdc++.h>
using namespace std;

vector<int> merge_sort(vector<int> a, int k, int &count)
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
    vector<int> sorted_b = merge_sort(b, k, count);
    vector<int> sorted_c = merge_sort(c, k, count);

    // merge step
    vector<int> sorted_a;

    int idx1 = 0;
    int idx2 = 0;

    while(idx1 < sorted_b.size() && idx2 < sorted_c.size())
    {
        if(sorted_b[idx1] + sorted_c[idx2] == k)
        {
            count++;
            idx1++;
            idx2++;
        }
        else if(sorted_b[idx1] + sorted_c[idx2] < k)
            idx1++;
        else
            idx2++;
    }

    idx1 = 0;
    idx2 = 0;

    while(idx1 < sorted_b.size() && idx2 < sorted_c.size())
    {
        if(sorted_b[idx1] <= sorted_c[idx2])
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

    while(idx1 < sorted_b.size())
    {
        sorted_a.push_back(sorted_b[idx1]);
        idx1++;
    }

    while(idx2 < sorted_c.size())
    {
        sorted_a.push_back(sorted_c[idx2]);
        idx2++;
    }

    return sorted_a;
}

int main()
{
    int n, k, count = 0;
    cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++)
        cin>>a[i];

    cin>>k;

    vector<int> ans = merge_sort(a, k, count);
    cout<<count<<"\n";
    return 0;
}
