
// g++ -std=c++11 code.cpp -o code && ./code
#include <iostream>
using namespace std;


void swapTwoNumbers(int &a , int &b){
     swap(a,b);
}
int main()
{

    int a = 10;
    int b = 20;

    cout << "before swap: " << "a=" << a << ", b= " << b << endl;
    // swap(a,b);
    swapTwoNumbers(a,b);
    cout << "after swap: " << "a=" << a << ", b= " << b << endl;

    return 0;
}


