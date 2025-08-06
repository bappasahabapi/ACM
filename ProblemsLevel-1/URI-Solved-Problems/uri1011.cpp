

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double r, result;
    cin>>r;

    result = ((4/3.0) *3.14159 *(r*r*r));
    cout<<"VOLUME = "<<fixed<<setprecision(3)<<result;
    cout<<endl;


    return 0;
}

