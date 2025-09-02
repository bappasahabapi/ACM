#include<iostream>
using namespace std;
int main()
{
    int a, b,c, big_value;

    cin>>a>>b>>c;

    big_value = a;
    if(b>big_value)
        big_value = b;
    if(c> big_value)
        big_value = c;

    cout<< big_value<<" eh o maior"<<endl;
    return 0;
}
