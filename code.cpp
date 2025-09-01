
// g++ -std=c++11 code.cpp -o code && ./code
// g++ -std=c++11 code.cpp && ./a.out
#include <iostream>
using namespace std;

int factorial(int n){

    //base case 
    if(n==1) return 1;
    int ans = n * factorial(n-1);

    return ans;
}


int main()
{
    int n; cin>>n;

  int ans =factorial(n);
  cout<<ans<<endl;
}
