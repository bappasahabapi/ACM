
🔥 `two-pointer`

## Questions
<details>
<summary>
Reverse String
Given a string s, return true if it is a palindrome, or false otherwise.

[LC-344Reverse String](https://leetcode.com/problems/reverse-string/description/)


</summary>
<hr>

### 🔲 JS code
```javascript
//leetcode 344
var reverseString = function (s) {
  s.reverse();
};


```
### 🔲  CPP code

```c++
//
class Solution {
public:
    void reverseString(vector<char>& s) {
    int start = 0;
    int end = s.size() - 1;

    while (start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }
  }
};

//
// --- testing --- 
#include <iostream>
using namespace std;

int main() {
    // Example 1
    vector<char> s1 = {'h', 'e', 'l', 'l', 'o'};
    reverseString(s1);

    cout << "Reversed string: ";
    for (char c : s1) {
        cout << c;
    }
    cout << endl;

    // Example 2
    vector<char> s2 = {'H', 'a', 'n', 'n', 'a', 'h'};
    reverseString(s2);

    cout << "Reversed string: ";
    for (char c : s2) {
        cout << c;
    }
    cout << endl;

    return 0;
}


```
</details>
