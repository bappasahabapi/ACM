

#include <iostream>
#include <vector>

using namespace std;


/* 

two pointer approach [mirror concept]
 alphaNumeric: a-z,A-Z,0-9
    First ignore special characters isAlphanumeric()
    Second make them lower case tolower(ch)

    dry-run
    st =0; end=n-1;
    while(st<end){
        isAlphanumeric(!str[st]); st++; continue;
        isAlphanumeric(!str[end]); end--; continue;

        if(tolower(str[st])!=tolower(str[end){
            return false;
        }
        st++;
        end--;
    }
    return true;

 */



class Solution {
public:
    bool isAlphaNumeric(char ch) {
        if ((ch >= '0' && ch <= '9') ||
            (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
        int start = 0;
        int end = s.length() - 1;

        while (start < end) {
            if (!isAlphaNumeric(s[start])) {
                start++;
                continue;
            }
            if (!isAlphaNumeric(s[end])) {
                end--;
                continue;
            }
            if (tolower(s[start]) != tolower(s[end])) {
                return false;
            }

            start++;
            end--;
        }

        return true;
    }
};
