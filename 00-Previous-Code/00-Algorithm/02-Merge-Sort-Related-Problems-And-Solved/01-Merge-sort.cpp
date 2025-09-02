/*
 01.First handle the base case;
 02. we have a loop which continues 0 to mid-1;
 03. Next divide the vector into two parts: vector b and vector c;
 04. Next we have sorted vector(means divide steps);
 05. Next the conqure steps
*/
#include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include<algorithm>
using namespace std;

vector<int>merge_sort(vector<int>ans)
{

    //base case
    if(ans.size()<=1)
        return ans;

    int midPoint =ans.size()/2;

    // divide the vector into two parts
    vector<int>b;
    vector<int>c;

    // we have a loop which continues 0 to mid-1
    // we divide ans vector into two parts
    for(int i=0;i<midPoint;i++)
        b.push_back(ans[i]);

    for(int i=midPoint;i<ans.size();i++)
        c.push_back(ans[i]);

    // now we get two sortd vector
    // This is divide steps
    vector<int>sorted_b=merge_sort(b);
    vector<int>sorted_c=merge_sort(c);

    //conqure steps:
    vector<int>sorted_ans;
    int index1=0;
    int index2=0;

    for(int i=0; i<ans.size();i++)
    {

        // check the corner case
        if(index1==sorted_b.size())
        {
            sorted_ans.push_back(sorted_c[index2]);
            index2++;
        }
        else if(index2==sorted_c.size())
        {
            sorted_ans.push_back(sorted_b[index1]);
            index1++;
        }
        //-----

        else if(sorted_b[index1]<sorted_c[index2])
        {
            sorted_ans.push_back(sorted_b[index1]);
            index1++;
        }
        else
        {
            sorted_ans.push_back(sorted_c[index2]);
            index2++;
        }

    }
    return sorted_ans;

}



int main()
{
    vector<int> a={5,3,7,1,8,9};
    vector<int>ans =merge_sort(a);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";


    return 0;
}



