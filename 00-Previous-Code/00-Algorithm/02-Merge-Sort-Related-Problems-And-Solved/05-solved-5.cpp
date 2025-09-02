/*
 01.First handle the base case;
 02. we have a loop which continues 0 to mid-1;
 03. Next divide the vector into two parts: vector b and vector c;
 04. Next we have sorted vector(means divide steps);
 05. Next the conqure steps
*/


#include<bits/stdc++.h>
using namespace std;

int n,k;
bool found=false;


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
    
    //  now we get two sortd vector
    // This is divide steps
    vector<int>sorted_b=merge_sort(b);
    vector<int>sorted_c=merge_sort(c);

    // return sorted array is stored in vector a

    vector<int> sorted_a;

    // Next we take two index and both are pointed in index 0
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
        if(sorted_b[idx1]<sorted_c[idx2])
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

    // for (int i=0; i<sorted_a.size();i++){
    //   cout <<sorted_a[i]<<" ";
    // }
    // cout <<'\n'<<'\n';
    if(sorted_a.size()==n){
        for (int i=0; i<sorted_a.size();i++){
            cout <<sorted_a[i]<<" ";
        cout <<'\n';
    }
    
    return sorted_a;
}

int main()
{
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    cout<<"Enter a terget value to check "<<endl;
    cin>>k;
    vector<int>ans =merge_sort(a);
    // for(int i=0;i<ans.size();i++)
    //     cout<<ans[i]<<" ";


    return 0;
}