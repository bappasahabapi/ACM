#include<iostream>
using namespace std;
int main()
{
    double n;
    int intro,a;

    while(cin>>n)
    {
        intro  = n;
        n = 100*n;
        a=n;


        cout<<"NOTAS:\n"<<endl;

        cout<<intro/100<<" nota(s) de R$ 100.00"<<endl;
        intro = intro%100;

         cout<<intro/50<<" nota(s) de R$ 50.00"<<endl;
         intro = intro%50;


         cout<<intro/20<<" nota(s) de R$ 20.00"<<endl;
          intro= intro%20;


         cout<<intro/10<<" nota(s) de R$ 10.00"<<endl;
          intro = intro%10;

         cout<<intro/5<<" nota(s) de R$ 5.00"<<endl;
          intro = intro%5;


         cout<<intro/2<<" nota(s) de R$ 2.00"<<endl;
          intro = intro%2;

           cout<<"MOEDAS:\n";
          cout <<endl;


           cout<<intro/1<<" moeda(s) de R$ 1.00"<<endl;

           a = a%100;


          cout<<a/50<<" moeda(s) de R$ 0.50"<<endl;
          a =a%50;

            cout<<a/25<<" moeda(s) de R$ 0.25"<<endl;
          a =a%25;


            cout<<a/10<<" moeda(s) de R$ 0.10"<<endl;
          a =a%10;


            cout<<a/5<<" moeda(s) de R$ 0.05"<<endl;
            a =a%5;


           cout<<a/1<<" moeda(s) de R$ 0.01"<<endl;
            a =a%1;





    }
    return 0;
}
