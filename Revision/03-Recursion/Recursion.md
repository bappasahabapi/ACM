## Recursion

👍 **How fuction call works in language:**


- While the fuction is `not finished its executing` it will remain in the stack memory. </p>

- When the fuction is finished its execution , it is removed from its memory stack and the `flow of the program` is resotred where the fuction was called


# Print hello five times

```cpp

// g++ -std=c++11 code.cpp -o code && ./code
// g++ -std=c++11 code.cpp && ./a.out 
#include <iostream>
using namespace std;

void printMessage(){
    cout<<"Hello World"<<endl;
}

int main()
{

    printMessage();
    printMessage();
    printMessage();
    printMessage();
    printMessage();

    return 0;
}



```

---

```cpp

// g++ -std=c++11 code.cpp -o code && ./code
// g++ -std=c++11 code.cpp && ./a.out 
#include <iostream>
using namespace std;


void printMessage5(){
    cout<<"Hello World-5"<<endl;
}
void printMessage4(){
    cout<<"Hello World-4"<<endl;
    printMessage5();
}
void printMessage3(){
    cout<<"Hello World-3"<<endl;
    printMessage4();
}
void printMessage2(){
    cout<<"Hello World-2"<<endl;
    printMessage3();
}

void printMessage1(){
    cout<<"Hello World-1"<<endl;
    printMessage2();
}


int main()
{

    cout<<"Hello World form main"<<endl;
    printMessage1();
   

    return 0;
}
```