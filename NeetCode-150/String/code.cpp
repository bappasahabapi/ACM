// g++ -std=c++11 code.cpp && ./a.out  
#include <iostream>
#include <vector>
using namespace std;

//  character takes 1B =8bit(00000000) memory


int main()
{
    // int arr[]={1,2,3};
    // cout << arr << endl; //here we get memeory address
    // char str[]={'a', 'b', 'c', 'd', 'e', 'f','\0'};
    // cout << str <<" "<<strlen(str) << endl; //constant pointer
    // char str1[]="bappa saha"; //string literal 

    char str2[12];

    // cout<<"Enter character: "<< endl;
    // cin>>str2;
    // cout << str2 << endl; // only take first word . eleminate everything comes after space.

    cout<<"Enter Sentence: "<< endl;
    // cin.getline(str2,len,delim);
    cin.getline(str2,12);
    cout << str2 << endl; // only take first word .

    for(char ch: str2){
        cout<<ch<<" ";
    }
    cout<<endl;

    return 0;
}
