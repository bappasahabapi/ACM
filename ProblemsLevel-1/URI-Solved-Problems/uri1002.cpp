
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double i,A;
    cin>>i;
    A =3.14159*i*i;

    cout<<fixed;
    cout<<setprecision(4);
    cout<<"A="<<A<<endl;
    return 0;
}
