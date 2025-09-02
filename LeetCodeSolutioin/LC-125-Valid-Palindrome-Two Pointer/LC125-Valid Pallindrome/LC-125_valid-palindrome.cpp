#include <iostream>
#include <string>
#include <cctype> // for isalnum and tolower conversion

using namespace std;

bool isPalindrome(string inputString)
{

    int leftPointerIndex = 0;
    int rightPointerIndex = inputString.length() - 1;

    while (leftPointerIndex < rightPointerIndex)
    {

        // Move left pointer to the next alphanumeric character
        while (leftPointerIndex < rightPointerIndex && !isalnum(inputString[leftPointerIndex]))
        {
            leftPointerIndex++;
        };

        while (leftPointerIndex < rightPointerIndex && !isalnum(inputString[rightPointerIndex]))
        {
            rightPointerIndex--;
        }

        // Compare characters after converting to lowercase

        // string s =tolower(inputString);
        if (tolower(inputString[leftPointerIndex]) != tolower(inputString[rightPointerIndex]))
        {
            return false;
        }
        leftPointerIndex++;
        rightPointerIndex--;
    }

    return true;
};


int main()
{

    string inputString;

    cout << "Enter a string: " << endl;
    getline(cin, inputString);

    if (isPalindrome(inputString))
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "String is Not Palindrome";
    }

    return 0;
}


