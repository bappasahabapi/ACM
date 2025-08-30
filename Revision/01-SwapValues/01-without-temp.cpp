
// g++ -std=c++11 code.cpp -o code && ./code
#include<iostream>
using namespace std;
int main(){

    int a=10; int b=20;

    cout<<"before swap: "<<"a="<<a<<", b= "<<b<<endl;

    a = a + b; // 10+20 =30
    b = a - b;  // 30-20 = 10 =b 
    a = a - b;  // 30-10 = 20 =a

    cout<<"after swap: "<<"a="<<a<<", b= "<<b<<endl;
    return 0;
}