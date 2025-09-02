

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


int testMain() {
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






    vector<char> s1;
    string input;

    // Taking input from the user
    cout << "Enter a string: ";
    cin >> input;

    // Converting the string into a vector of characters
    for (char c : input) {
        s1.push_back(c);
    }

    // Reversing the vector in place
    reverseArray(s1);

    // Printing the reversed vector
    cout << "Reversed string: ";
    for (char c : s1) {
        cout << c;
    }
    cout << endl;

    return 0;
}