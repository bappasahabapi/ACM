#include<iostream>
using namespace std;
int main()
{
    float i =0;
    float j = 1;
    while(i<=2.1)
    {
        cout<<"I="<<i<<" J="<<i+j<<endl;
        cout<<"I="<<i<<" J="<<i+1+j<<endl;
        cout<<"I="<<i<<" J="<<i+2+j<<endl;
        i+=.2;


    }
}
