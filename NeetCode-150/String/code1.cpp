// g++ -std=c++11 code.cpp && ./a.out  
#include <iostream>
#include <string>
using namespace std;

//  character takes 1B =8bit(00000000) memory


int main()
{
    string str ="bappa saha";

    // string str;
    // getline(cin,str);
    // cout<<str<< " "<<str.length()<<endl;

    // for (int i = 0; i <str.length(); i++)
    // {
    //     cout<<str[i]<<" ";
    // }
    for(char c : str){
        cout<<c<<" ";
    }
    cout<<endl;
    


    return 0;
}
