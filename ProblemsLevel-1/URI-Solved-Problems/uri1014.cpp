
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a;
    float b;
    cin>>a>>b;

    cout<<fixed;
    cout<<setprecision(3);

    cout<<(a/b)<<" km/l"<<endl;



    return 0;
}


