#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    string c;
    double salary,sells,total;

    cin>>c;

    cin>>salary>>sells;

    total =salary +(0.15 * sells);

     cout<<fixed;
     cout<<setprecision(2);


    cout<<"TOTAL = R$ "<<total<<endl;

    return 0;
}

