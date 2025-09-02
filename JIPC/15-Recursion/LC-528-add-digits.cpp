
// g++ -std=c++11 code.cpp -o code && ./code
// g++ -std=c++11 code.cpp && ./a.out

/*
 n =385 => 3+8+5 => 16 => 1+6=> 7 (ans is single digit)


*/

#include <iostream>
using namespace std;


//Naive approach: O(Log(N))
int addDigits(int n){
    int digitSum =0;
    while (n>0)
    {
        int lastDigit =  n %10;
        digitSum = digitSum+ lastDigit; 
        // digitSum =digitSum + n %10;
        n = n/10;

        if(n==0 && digitSum>9){
            n =digitSum;
            digitSum=0;
        }
    }
    return digitSum;
    
}


//todo: Recursive Approach

int solve(int num){

    if(num <=9) return num;
    int digitSum =0;
    while (num>0)
    {
        digitSum +=num % 10;
        num /=10;
    }

    return solve(digitSum);
    
}

int addDigit(int num){
    return solve(num);
}


int main(){
    // int n;
    // cout << "Enter a number: ";
    // cin >> n; // example: 385

    // int ans =addDigits(385);
    int ans =solve(385);
    cout<<ans<<endl;


    return 0;
}


//todo: basic idea of find the last digit and sum of the digit.
// int main()
// {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n; // example: 235


//     // find sum of  last digit idea
//     int sum = 0;
//     while (n > 0)
//     {
//         sum =sum+ (n % 10); // take last digit
//         n =n / 10;       // remove last digit
//     }

//     cout << "Sum of digits = " << sum << endl; // 10
//     return 0;
// }

// Enter a number: 385
// Sum of digits = 16
