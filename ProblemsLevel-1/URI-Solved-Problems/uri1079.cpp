#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    double a,b,c;
     cout<<fixed<<setprecision(1);
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        cin>>b;
        cin>>c;
        double sum =((a*2+b*3+c*5)/(2+3+5));
         cout<<sum<<endl;

    }



}
