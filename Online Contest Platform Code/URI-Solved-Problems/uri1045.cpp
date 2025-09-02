#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   double  x,y,z,a,b,c;
   cin>>x>>y>>z;
   cout<<fixed<<setprecision(1);



    a = x;
    b = y;
   c = z;
   if ( a < y){
    a = y ;
    b = x ;
    c = z;
   }
   if (a < z){
    a = z;
    b = x;
    c = y;
   }

   if(a>=b+c)
   {
       cout<<"NAO FORMA TRIANGULO"<<endl;
   }
   else{
       if(a*a==b*b+c*c)
    cout<<"TRIANGULO RETANGULO"<<endl;
   if(a*a>b*b+c*c)
    cout<<"TRIANGULO OBTUSANGULO"<<endl;
    if(a*a<b*b+c*c)
    cout<<"TRIANGULO ACUTANGULO"<<endl;
    if(a==b && b==c)
    cout<<"TRIANGULO EQUILATERO"<<endl;
    if(a==b ||b==c  )
    {

     cout<<"TRIANGULO ISOSCELES"<<endl;


   }
   }


    }








