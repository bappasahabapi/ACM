
// g++ -std=c++11 code.cpp -o code && ./code
// g++ -std=c++11 code.cpp && ./a.out
#include <iostream>
using namespace std;

int fibonacci(int n){
    // 0 1 1 2 3 5

    //base: if 0 or 1 
    if(n<2){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}


int main()
{

    int ans =fibonacci(4);
    cout<<ans<<endl;
}
