

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a, b;
    float liter;

    cin>>a>>b;

    liter =((a*b)/12.0);

    cout<<fixed;
    cout<<setprecision(3);

    cout<<liter;


    return 0;
}

