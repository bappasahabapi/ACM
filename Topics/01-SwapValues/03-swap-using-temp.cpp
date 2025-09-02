
// g++ -std=c++11 code.cpp -o code && ./code
#include <iostream>
using namespace std;
int main()
{

    int a = 10;
    int b = 20;

    cout << "before swap: " << "a=" << a << ", b= " << b << endl;

    int temp;
    temp = a;  //10
    a = b;    // 20
    b=temp;   //10

    cout << "after swap: " << "a=" << a << ", b= " << b << endl;

    return 0;
}