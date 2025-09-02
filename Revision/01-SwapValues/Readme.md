# Swap  Two Values:
<!-- 
Bappa Saha
tag: Programming level:school
Olympic school level question:

-->

- Swap two number without temp
```c++
// g++ -std=c++11 code.cpp -o code && ./code
#include<iostream>
using namespace std;
int main(){

    int a=10; int b=20;

    cout<<"before swap: "<<"a="<<a<<", b= "<<b<<endl;

    a = a + b; // 10+20 =30
    b = a - b;  // 30-20 = 10 =b 
    a = a - b;  // 30-10 = 20 =a

    cout<<"after swap: "<<"a="<<a<<", b= "<<b<<endl;
    return 0;
}


```
- Swap two number uisng bitwise operator

🌴 code exceution:
```shell
first a =a^b
a = 10 ^ 20
   01010   (10 in binary → 5 bits for clarity)
^  10100   (20 in binary)
-----------
   11110   = 30
now, 
a = 30
b = 20

second, b = a ^ b
b = 30 ^ 20
   11110   (30 in binary)
^  10100   (20 in binary)
-----------
   01010   = 10
now,
a = 30
b = 10   (original a)

Step 3: a = a ^ b
a = 30 ^ 10
   11110   (30 in binary)
^  01010   (10 in binary)
-----------
   10100   = 20
a = 20   (original b)
b = 10   (original a)   
```

```c++


// g++ -std=c++11 code.cpp -o code && ./code

/* 
1. a = a ^ b: Store the Bitwise XOR of a and b in a. Now, a holds the result of (a ^ b).

2. b = a ^ b: Bitwise XOR the new value of a with b to get the original value of a. This gives us, b = (a ^ b) ^ b = a.

3.a = a ^ b: Bitwise XOR the new value of a with the new value of b (which is the original a) to get the original value of b. This gives us, a = (a ^ b) ^ a = b.

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

```
- Swap two number uisng temp variable
```c++

// g++ -std=c++11 code.cpp -o code && ./code
#include <iostream>
using namespace std;
int main()
{

    int a = 10;
    int b = 20;

    cout << "before swap: " << "a=" << a << ", b= " << b << endl;

    int temp;
    temp = a;
    a = b;
    b=temp;

    cout << "after swap: " << "a=" << a << ", b= " << b << endl;

    return 0;
}

```
