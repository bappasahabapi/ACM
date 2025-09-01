
// g++ -std=c++11 code.cpp -o code && ./code
// g++ -std=c++11 code.cpp && ./a.out
#include <iostream>
using namespace std;

void print(int n)
{

    //base conditon: simple means the break conditioin.
    if (n == 5)
    {
        cout << n << endl;
        return;
    }

    cout << n << endl;
    // recursive call
    // if you are calling a function again and again, you can treat it as a separate call in the stack

    // this is called tail recursion
    // this is the last function call
    print(n + 1);
}

int main()
{

    // print number 1 to n
    // print first 5 numbers: 1 2 3 4 5

    print(1);

    return 0;
}
