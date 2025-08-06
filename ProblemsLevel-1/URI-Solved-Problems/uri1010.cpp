
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int cp1,cp2,up1,up2;
    double price1,price2,total;
    cin>>cp1>>up1>>price1;
    cin>>cp2>>up2>>price2;

    total = (up1*price1)+(up2*price2);

    cout<<fixed;
    cout<<setprecision(2);
    cout<<"VALOR A PAGAR: R$ "<<total<<endl;

    return 0;
}


