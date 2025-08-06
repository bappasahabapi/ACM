
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;

      cout<<fixed;
      cout<<setprecision(3);

      cout<<"TRIANGULO: "<<(.5* (a*c))<<endl;
      cout<<"CIRCULO: "<<(3.14159 *(c*c))<<endl;
      cout<<"TRAPEZIO: "<<(0.5*(a+b)* c)<<endl;
      cout<<"QUADRADO: "<<(b*b)<<endl;
      cout<<"RETANGULO: "<<(a*b)<<endl;



    return 0;
}


