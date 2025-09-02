
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   float sal,f1,f2,f3;

   cout<<fixed<<setprecision(2);
   cin>>sal;
    if(sal<=2000.00)
    {
       cout<<"Isento"<<endl;
    }
    else if(sal>2000.01 &&sal<=3000.00)
    {
        f1 = sal-2000.00;
        f1 = f1*.08;

        cout<<"R$ "<<f1<<endl;
    }
     else if(sal>3000.01 &&sal<=4500.00)
    {
        f2 =sal-3000;
        f2 =f2*.18 +80;
      cout<<"R$ "<<f2<<endl;
    }
    else if(sal>4500.00)
    {
        f3 =sal-4500;
        f3 =f3*.28+80+270;
        cout<<"R$ "<<f3<<endl;

}
}
