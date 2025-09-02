#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
     cout<<fixed<<setprecision(2);
    int testcase;
    cin>>testcase;
    int amount ;
    char ch;
    int C,R,S,total;
    C=R=S=total=0;
    while(testcase--)
    {
        cin>>amount>>ch;
        if('C'== ch)
            C=C+amount;
        else if('R'== ch)
            R=R+amount;
        else if ('S'==ch)
            S=S+amount;

        total=total+amount;
    }
    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<C<<endl;
    cout<<"Total de ratos: "<<R<<endl;
    cout<<"Total de sapos: "<<S<<endl;

    cout<<"Percentual de coelhos: "<<C*100.0/total<<" %"<<endl;
    cout<<"Percentual de ratos: "<<R*100.0/total<<" %"<<endl;
    cout<<"Percentual de sapos: "<<S*100.0/total<<" %"<<endl;


}
