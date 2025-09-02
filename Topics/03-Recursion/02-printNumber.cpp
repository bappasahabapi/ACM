
// g++ -std=c++11 code.cpp -o code && ./code
// g++ -std=c++11 code.cpp && ./a.out 
#include <iostream>
using namespace std;


void print3(int num){
    cout<<num<<endl;
}
void print2(int num){
    cout<<num<<endl;
    print3(3);
}
void print1(int num){
    cout<<num<<endl;
    print2(2);
}


int main()
{

    //write a function that print 1 to n
   print1(1);
   

    return 0;
}


