# Valid Palindrome 
run code:

    g++ -std=c++11 LC-125_Valid-Palindrome.cpp && ./a.out   

🔥 `two-pointer`

```javascript
const str ='abc';
str.split("");                   // [ 'a', 'b', 'c' ]
str.split('').reverse();           // [ 'c', 'b', 'a' ]
str.split('').reverse().join('')     // [ 'cba' ]

```
- Instead of thinking of palindromes as words Read the same backwards , think of them as words `where each of half mirrors each other`

- This mirror concept works for words with both even and odd letters.

 - L O L
 - LO LO
 - LO VE -- `not mirror each part`


## ♟️ PseudoCode Steps:

- Sanitize input string by **removing** non alphanumeric characters( letters and numbers.)
- Create a **left(strart index) and right pointer(end index)** . 
- Initially at start and end of the input string.
- While **left is less than right**
- Now if the character at left and right pointer are not equal, **return false.**

example: 
- `left[0] `,  right[0]means = `right[string.length-1]` 
- **LO LO** , left[0]=L === right[0]=0 return `false`
- **LO VE** , left[0]=L === right[0]=E return `false`

## Questions
<details>
<summary>
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.
[LC-125:](https://leetcode.com/problems/valid-palindrome/description/)


</summary>
<hr>

[**💻 Submit Code**](https://leetcode.com/problems/valid-palindrome/description/)

### 🔲 JS code
```javascript
function isPalindromeUpdate(s) {
  const sanitizeString = s.toLowerCase().replace(/[\W]/g, "");

  let leftPointerIndex = 0;
  let rightPointerIndex = sanitizeString.length - 1;

  while (leftPointerIndex < rightPointerIndex) {
    if (
      sanitizeString[leftPointerIndex] !== sanitizeString[rightPointerIndex]
    ) {
        console.log('Not a palindrome')
        return false;
    }
    leftPointerIndex++;
    rightPointerIndex--;

  }
  console.log('palindrome')
  return true;
}

const string = "lol";
isPalindromeUpdate(string);




function isPalindrome(s) {
    //Sanitize the input string
    s =s.toLowerCase().replace(/[\W_]/g,"");

    let leftPointerIndex =0;
let rightPointerIndex =s.length -1;

    while(leftPointerIndex < rightPointerIndex){
        if(s[leftPointerIndex] !==s[rightPointerIndex]){
            console.log(false)
            return false;
        }
        leftPointerIndex++;
        rightPointerIndex--;
    }
    console.log(true)
    return true;
}

const s ="lolo";
isPalindrome(s);


```
### 🔲  CPP code

```c++
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


```
</details>
