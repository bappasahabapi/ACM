#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int counter=0;
    float n,sum =0;
    while(counter<2)
    {
         cin>>n;



        if(n<0 || n>10)
        {
            cout<<"nota invalida"<<endl;
        }
        else {
            counter++;
            sum = sum+n;
            }

    }
    cout<<fixed<<setprecision(2);
     cout<<"media = "<<sum/2<<endl;


}
