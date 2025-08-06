#include<iostream>
using namespace std;
void function (int x,int y)
{
    cout<<"\n\n\t Inside function";
    try
    {
        if(y==0)
        {
            throw y;
        }
        else
        {
            cout<<"\n\n\t Division: "<<(x/y);

        }
    }
    catch(int i)
    {
        cout<<"\n\t Cought Integer Inside Function "<<i;
        throw;
    }
    cout<<"\n\n\t End of function";

}
int main()
{
    cout<<"\n\n\tInside main";
    try
    {
        function(10,5);
    }
    catch(int no)
    {
        cout<<"\n\n\tCought Integer Inside Main"<<no;

    }
    cout<<"\n\n\t End of main";
    return 0;
}







