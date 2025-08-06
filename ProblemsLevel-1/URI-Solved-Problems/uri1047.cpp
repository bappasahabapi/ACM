#include<iostream>
using namespace std;
int main()
{
    int  h1,h2,m1,m2;
    cin>>h1>>m1>>h2>>m2;

    if(h1==h2 && m1==m2)
        {
         cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
        }

        else if(h2>h1 &&m2>m1)
       {
     cout<<"O JOGO DUROU "<<h2-h1<<" HORA(S) E "<<m2-m1<<" MINUTO(S)"<<endl;
       }
       else if(h2>h1 && m1>m2)
       {
            cout<<"O JOGO DUROU "<<h2-h1<<" HORA(S) E "<<m1-m2<<" MINUTO(S)"<<endl;
       }

   else
   {
      cout<<"O JOGO DUROU "<< 1-(h2-h1)<<" HORA(S) E "<<60-(m1-m2)<<" MINUTO(S)" <<endl;
   }




}
