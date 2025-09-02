
/*
LeetCode-20 : Valid Bracket Sequence

Steps:
- Take user string input
- Store every character in a variable
- define string template class :  stack<char> st;

Case:
    1. if character start with valid bracket sequence
            then push character to stack .
        . else
                it is empty
                or, start and end with valid bracket sequence
    3. if not valid sequence
            then is it empty means valid
            or simply invalid
 */

// solution: when we have opening bracket push it 
//           When we have closing bracket we just compare this to the top

#include <bits/stdc++.h>
using namespace std;
int main()
{

    // user input:   ((){}[])

    cout << "Enter Bracket Sequence:" << endl;
    string str;
    cin >> str;

    stack<char> st;

    for (int i = 0; i < str.size(); i++)
    {
        char newChar = str[i];
        // cout << newChar << endl;

        if (newChar == '(' || newChar == '{' || newChar == '[')
        {
            st.push(newChar);
        }
        else
        {
            if (st.empty())
            {
                cout << "Invalid" << endl;
                return 0;
            }
            else if(newChar == ')' && st.top() == '('){
                    st.pop();
            }
            else if(newChar == '}' && st.top() == '{'){
                    st.pop();
            }
            else if(newChar == ']' && st.top() == '['){
                    st.pop();
            }
            else{
                cout<<"Invalid\n";
                return 0;
            }
        }
    }
    if (st.empty())
    {
        cout << "valid" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }

    return 0;
}