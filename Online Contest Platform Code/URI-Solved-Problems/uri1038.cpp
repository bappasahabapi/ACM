
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    float price;
    float array[5]={4.00,4.50,5.00,2.00,1.50};

    price =array[x-1]*y;

    cout<<"Total: R$ "<<setprecision(2)<<fixed<<price<<endl;
    return 0;



}
