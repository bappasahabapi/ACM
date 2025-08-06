#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{

    float a,b,c,x,y,z;
    cin>>a>>b>>c;

    x = (b*b)-(4*a*c);
    if((x<0)||(a==0))
    {
        cout<<"Impossivel calcular";
    }
    else
        {

         cout<<fixed;
         cout<<setprecision(5);

           y = (-b + sqrt(x))/ (a+a)  ;
          cout<<"R1 = "<<y<<endl;

           z = (-b - sqrt (x))/(a+a);
            cout<<"R2 = "<<z;
        }


               cout<<endl;


    return 0;
}
