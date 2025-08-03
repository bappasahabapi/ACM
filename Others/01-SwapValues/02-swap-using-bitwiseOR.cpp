
// g++ -std=c++11 code.cpp -o code && ./code

/* a = a ^ b: Store the Bitwise XOR of a and b in a. Now, a holds the result of (a ^ b).
b = a ^ b: Bitwise XOR the new value of a with b to get the original value of a. This gives us, b = (a ^ b) ^ b = a.
a = a ^ b: Bitwise XOR the new value of a with the new value of b (which is the original a) to get the original value of b. This gives us, a = (a ^ b) ^ a = b.

*/

#include <iostream>
using namespace std;
int main()
{

    int a = 10;
    int b = 20;

    cout << "before swap: " << "a=" << a << ", b= " << b << endl;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "after swap: " << "a=" << a << ", b= " << b << endl;

    return 0;
}