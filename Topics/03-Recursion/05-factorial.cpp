
// g++ -std=c++11 code.cpp -o code && ./code
// g++ -std=c++11 code.cpp && ./a.out


/* 

5! = 5 * 4 * 3 * 2 * 1 => 5 * 4!
4! = 4 * 3 * 2 * 1 => 4 * 3!
3! = 3 * 2 * 1 => 3 * 2!
2! = 2 * 1 => 2 * 1!
1! = 1 => 1  => this is the base case


*/

#include <iostream>
using namespace std;

int factorial(int n)
{

    // base case
    if (n == 1) return n;
    int ans = n * factorial(n - 1);

    return ans;
}

int main()
{
    int n;
    cin >> n;

    int ans = factorial(n);
    cout << ans << endl;
}
