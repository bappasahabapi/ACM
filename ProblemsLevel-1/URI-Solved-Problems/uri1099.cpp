#include<iostream>
using namespace std;
int main()
{
    int test,num = 0;
    cin>>test;
    int x, y,i;

    for(int j =0 ; j <test;j++)
    {
       cin>>x>>y;
       if(x==y)
              {
                 num = 0;

              }
       else if(x<y)
                  {
                   for( i=i+x,num=0; i<y;i++)
                     {
                        if(i%2!=0)
                        {
                           num=num+i;

                         }

                     }
                      cout<<num<<endl;
                  }
        else if (x>y)
        {
            for(i=y+1;i<x;i++)
            {
                if(i%2 != 0)
                {
                    num=num+i;
                }
            }
            cout<<num<<endl;
        }

        num =0;
    }
    return 0;
}









