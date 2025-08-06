#include<iostream>
using namespace std;
int main()
{
    int x,y;
    int sum =0;
    cin>>x>>y;
    if(x>y)
    {

        for(int i=y+1;i<x;i++)
        {
            if(i%2!=0)
                sum+=i;

            //cout<<i<<endl;
        }


    }
    else

    {

        for(int i=x+1;i<y;i++)
        {
            if(i%2!=0)
                sum+=i;

             //cout<<i<<endl;
        }

    }
    cout<<sum<<endl;


}
