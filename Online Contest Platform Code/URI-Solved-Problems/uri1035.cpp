#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((b>c)&&(d>a)&&(c+d)>(a+b)&&(a%2==0))
    {
        cout<<"Valores aceitos";
    }
    else
        cout<<"Valores nao aceitos";

        cout<<endl;

    return 0;
}



