/* 
    here time and space complexity-> O(n)

 */


#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n;  //-> 3-> O(1)
    cin>>n; //->3 -> O(1)

    vector<int>a(n);  // --> 3 size er ekra vecror init korlo -> O(n)

    //todo: loop -> O(n)
    for (int i = 0; i < n; i++)
        cin>>a[i];  //-> [4,5,6]

    int sum =0; // -> O(1)
       //todo: loop -> O(n)
    for (int i = 0; i < n; i++)
    {
            sum=sum+a[i];
    }
    cout<<sum<<endl;
    
    


    return 0;
}
