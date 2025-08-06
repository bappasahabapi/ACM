#include<iostream>
using namespace std;

int main()
{
    float a;
    cin>>a;
    if(a<0 ||a>100)
    {
        cout<<"Fora de intervalo";
    }
    else if( a<=25)
        {
           cout<<"Intervalo [0,25]";
        }

          else if( a<=50)
        {
           cout<<"Intervalo (25,50]";
        }

          else if( a<=75)
        {
           cout<<"Intervalo (25,75]";
        }
           else if( a<=100)
        {
           cout<<"Intervalo (75,100]";
        }

        cout<<endl;




    return 0;
}

