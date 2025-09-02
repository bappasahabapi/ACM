
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int number,work_hour;
    double salary, total_salary;

    cin>>number>>work_hour>>salary;

    total_salary =work_hour*salary;

    cout<<"NUMBER = "<<number<<endl;
    cout<<fixed;
    cout<<setprecision(2);
    cout<<"SALARY = U$ "<<total_salary<<endl;
    return 0;
}
