#include<iostream>
using namespace std;
int main()
{
    int n;
    for(int i =0; i<n;i++)
    {
        cin>>n;
        if(n==0)
            cout<<"NULL"<<endl;

         if(n%2==0 && n<0)
          cout<<"EVEN NEGATIVE"<<endl;
           if(n%2!=0 && n>0)
          cout<<"ODD POSITIVE"<<endl;
          if(n%2!=0 && n<0)
            cout<<"ODD NEGATIVE"<<endl;

    }
}


