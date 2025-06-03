// 01-ReverseString.cpp
// g++ -std=c++11 01-ReverseString.cpp && ./a.out

#include <iostream>
#include <string>
using namespace std;

//  character takes 1B =8bit(00000000) memory




// using string method
int main()
{
    string str = "bappa saha";

    reverse(str.begin(), str.end());
    cout << str << endl;

    return 0;
}



// using car array

// void reverseString(vector<char> &s)
// {
//     int start = 0;
//     int end = s.size() - 1;

//     while (start < end)
//     {
//         swap(s[start], s[end]);
//         start++;
//         end--;
//     }
// }