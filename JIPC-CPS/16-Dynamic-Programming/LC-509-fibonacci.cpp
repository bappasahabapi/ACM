
// g++ -std=c++11 code.cpp -o code && ./code
// g++ -std=c++11 code.cpp && ./a.out
#include <iostream>
#include <vector>
using namespace std;

// uisng loop
//bottom-up dynamic programming
int fibo3(int n){
    int cur=n;
    int stepOnePreFibo, stepTwoPreFibo;
    stepOnePreFibo=1;
    stepTwoPreFibo=0;

    for(int i=2 ; i<=n; i++){
        cur=stepOnePreFibo+stepTwoPreFibo;
        stepTwoPreFibo=stepOnePreFibo;
        stepOnePreFibo=cur;
    }

    return cur;

}


int fibonacci(int n){
    // 0 1 1 2 3 5

    //base: if 0 or 1 
    if(n<2){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

//uisng dynamic programming
/* 
 vector<int> dp(n+1,-1)

    dp(2) =-1;
    dp(3) =-1;
    dp(4) =-1;
    dp(5) =-1;
    dp(6) =-1;

 */

int solve(int n, vector<int> &dp){

    if (n<2) return n;

    if(dp[n] != -1) return dp[n];

    int ans = solve(n-1,dp)+solve(n-2,dp);
    dp[n] =ans;
    return dp[n]; // return ans;

}

int fibonacci2(int n){
    vector <int> dp(n+1, -1);
    int ans = solve(n,dp);
    return ans;

}

int main()
{

    // int ans =fibonacci(4);
    // int ans =fibonacci2(4);
    int ans =fibo3(4);
    cout<<ans<<endl;
}
