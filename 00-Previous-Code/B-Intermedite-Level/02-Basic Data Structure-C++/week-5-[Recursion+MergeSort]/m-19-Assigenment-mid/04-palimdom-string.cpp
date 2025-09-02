#include<bits/stdc++.h>
using namespace std;

bool is_Palindrome(string str)
{
    int n = str.length();
    for(int i = 0; i < n/2; i++)
    {
        if(str[i] != str[n-i-1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str;
    cin >> str;
    if(is_Palindrome(str))
    {
        cout << "Yes"<<endl;
    }
    else
    {
         cout << "No"<<endl;
    }
    return 0;
}
