

#include<iostream>
using namespace std;
int main()
{
    int x=0;

    for(int i = 1, j= 7;i<=9; i+=2)
    {
        for( ; x<=2;j-- )
        {
             cout<<"I="<<i<<" "<<"J="<<j<<endl;
             x++;
        }
        j+=5;
        x=0;
    }



}
