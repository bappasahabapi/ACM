#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  float a,salary,nsal;
  int p;
  cout<<fixed<<setprecision(2);

  cin>>a;

  if(a>=0.00 && a<=400.00)
  {

     salary =(a*.15);
     nsal =salary+a;
     cout<<"Novo salario: "<<nsal<<endl;
     cout<<"Reajuste ganho: "<<salary<<endl;
     p=15;


  }
     if(a>400.01 && a<=800.00)
   {

     salary =(a*.12);
     nsal =salary+a;
     cout<<"Novo salario: "<<nsal<<endl;
     cout<<"Reajuste ganho: "<<salary<<endl;
     p=12;

   }
     if(a>800.01 && a<=1200.00)
   {

     salary =(a*.10);
     nsal =salary+a;
     cout<<"Novo salario: "<<nsal<<endl;
     cout<<"Reajuste ganho: "<<salary<<endl;
     p=10;

   }

    if(a>1200.01 && a<=2000.00)
   {

     salary =(a*.07);
     nsal =salary+a;
     cout<<"Novo salario: "<<nsal<<endl;
     cout<<"Reajuste ganho: "<<salary<<endl;
     p=7;

   }
      if(a>2000.01)
   {

     salary =(a*.04);
     nsal =salary+a;
     cout<<"Novo salario: "<<nsal<<endl;
     cout<<"Reajuste ganho: "<<salary<<endl;
     p=4;

   }
   cout<<"Em percentual: "<<p<<" %"<<endl;


}



