#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    //best case
    if(n==0)
        return 1;
    return factorial(n-1)*n;
}

int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<factorial(n)<<endl;

    return 0;
}