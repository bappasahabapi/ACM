### 🔥Type: Recursion:

👍 **How fuction call works in language:**

- While the fuction is `not finished its executing` it will remain in the stack memory. </p>

- When the fuction is finished its execution , it is removed from its memory stack and the `flow of the program` is resotred where the fuction was called

- if same problems are solved once and again it is called `overlaping sub-problem`

📟: **Problems:**

- [x] Factorial

    <details>
    <summary>Soluton:Factorial</summary>

  ```cpp

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

  ```

    </details>

- [x] https://leetcode.com/problems/fibonacci-number/description/

    <details>
    <summary> 🔲 LC-509 Fibonacci Number</summary>

  ```cpp
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

  <!-- -------------  -->


    // g++ -std=c++11 code.cpp -o code && ./code
    // g++ -std=c++11 code.cpp && ./a.out
    #include <iostream>
    #include <vector>
    using namespace std;


    //int fibonacci(int n){
        // 0 1 1 2 3 5

        //base: if 0 or 1
       // if(n<2){
            return n;
        //}
       // return fibonacci(n-1) + fibonacci(n-2);
    //}

    //todo: uisng dynamic programming O(n)

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
        int ans =fibonacci2(4);
        cout<<ans<<endl;
    }

    // uisng loop O(n)
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


  ```

    </details>

- [x] https://leetcode.com/problems/add-digits/description/

    <details>
    <summary> 🔲 LC-258 Add Digits</summary>

  ```cpp

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


  ```

    </details>
