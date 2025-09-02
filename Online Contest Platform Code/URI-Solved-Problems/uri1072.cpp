#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int inside =0;
    int outside = 0;
    int a;
        for(int i=0;i<n;i++)
        {
           cin>>a;
            if(a>=10 && a<=20 )

               inside++;

            else
                outside++;

        }
        cout<<inside<<" in"<<endl;
        cout<<outside<<" out"<<endl;
     }


