#include<iostream>
using namespace std;
int main()
{
    int day,year,month;
    cin>>day;

    year =0;
    month=0;

    year = day/365;
    day = day% 365;

    month = day/30;
    day = day%30;

    day=day%30;

    cout<<year<<" ano(s)"<<endl;
    cout<<month<<" mes(es)"<<endl;
    cout<<day<<" dia(s)"<<endl;

    return 0;
}
