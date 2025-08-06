/* 

    Pointers :
    - Can access the value and also change the value also.
    - also access the memory address the variable.

 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int a  =55;
    int *aPtr = &a;  // means *aPtr point to a;
// int *bPtr = a; //we can not write this way

    cout<<"int a value :"<<a<<endl;
    cout<<"Access memory of address  a :"<<&a<<endl;
    cout<<endl;
    cout<<"Access value of 'a' using *aPtr:"<<*aPtr<<endl;
    cout<<"Access Memory Address of 'a' using aPtr :"<<aPtr<<endl;
    // cout<<"bPtr value :"<<bPtr<<endl

    *aPtr = 200;
    cout<<"value of 'a': is now = "<<a<<endl;

    return 0;
}