
#include<iostream>
using namespace std;
int main()
{
    int n;
    int c=0,d=0, p=0,q=0;

    for(int i = 0; i<5;i++)
    {
        cin>>n;
        if(n%2==0)
          {
           c++;
          }
          else if(n%2!=0)
          {
              d++;
          }
          if(n>0)
          {
              p++;
          }
          if(n<0)
            {
                q++;
            }

    }
    cout<<c<<" valor(es) par(es)"<<endl;


    cout<<d<<" valor(es) impar(es)"<<endl;
    cout<<p<<" valor(es) positivo(s)"<<endl;
    cout<<q<<" valor(es) negativo(s)"<<endl;
}
