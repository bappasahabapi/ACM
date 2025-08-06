/*
complexity of merge sort : O(n*log n)
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

    // divide the vector into two parts
    vector<int>Left;
    vector<int>Right;

    // we divide ans vector into two parts . here midPoint means where I divide the vector.
    int midPoint =ans.size()/2;


    // we have a loop which continues 0 to mid-1 porjonto to left e pathabo and mid theke n-1 size porjonto right e pathabo 
    // left vage left gulo gelo , right e right gulo gelo

    for(int i=0;i<midPoint;i++)
       Left.push_back(ans[i]);

    for(int i=midPoint;i<ans.size();i++)
        Right.push_back(ans[i]);

    // ekhon left half er jonno and right half er jonno ans ber korbo. eita bar korar jonno amra function takei call diye dibo
    // now we get two sortd vector
    // This is divide steps
    vector<int>sorted_Left=merge_sort(Left);
    vector<int>sorted_Right=merge_sort(Right);

    //conqure steps: 
    vector<int>sorted_ans;
    int left_index=0;
    int right_index=0;

    for(int i=0; i<ans.size();i++)
    {

        // check the corner case
        if(left_index==sorted_Left.size())
        {
            sorted_ans.push_back(sorted_Right[right_index]);
            right_index++;
        }
        else if(right_index==sorted_Right.size())
        {
            sorted_ans.push_back(sorted_Left[left_index]);
            left_index++;
        }
        //-----
            //todo: for acceding order
        else if(sorted_Left[left_index]<sorted_Right[right_index])
        {
            sorted_ans.push_back(sorted_Left[left_index]);
            left_index++;
        }
        //todo: for decending order
        // else if(sorted_Left[left_index]>sorted_Right[right_index])
        // {
        //     sorted_ans.push_back(sorted_Left[left_index]);
        //     left_index++;
        // }
        else
        {
            sorted_ans.push_back(sorted_Right[right_index]);
            right_index++;
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



