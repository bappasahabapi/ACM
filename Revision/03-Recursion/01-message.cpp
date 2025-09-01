
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

    cout<<"Hello World-main"<<endl;
    printMessage1();
   

    return 0;
}


