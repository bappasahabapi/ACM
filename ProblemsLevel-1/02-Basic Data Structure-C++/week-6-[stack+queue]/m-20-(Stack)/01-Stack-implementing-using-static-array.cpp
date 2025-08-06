//  Stack implementation using static array

#include <iostream>
using namespace std;

const int MAX_SIZE = 10;
class Stack
{
public:
    int arr[MAX_SIZE];
    int stack_size; // height

    Stack()
    {
        stack_size = 0;
    }
    // Add an element to the stack O(1)
    void push(int value)
    {
        if (stack_size > MAX_SIZE)
        {
            cout << "Stack size is full!" << endl;
            return;
        }
        stack_size = stack_size + 1; // []
        arr[stack_size - 1] = value;
    }

    // Remove an element from the stack O(1)
    void pop(int value)
    {
        if (stack_size == 0)
        {
            cout << "Stack size is empty!" << endl;
            return ;
        }
        arr[stack_size - 1] = 0; // show that no one can see remove element
        stack_size = stack_size - 1;
    }

    // Return the top element of the stack O(1)
    int topElement()
    {
        if (stack_size == 0)
        {
            cout << "Stack size is empty!" << endl;
            return -1;
        }
        return arr[stack_size - 1];
    }
};

int main()
{
    Stack st;
    st.push(22);
    cout << st.topElement() << "\n";
    st.push(24);
    cout << st.topElement() << endl;
    st.push(28);
    cout << st.topElement() << endl;
    st.push(32);
    cout << st.topElement() << endl;
    st.push(55);
    cout << st.topElement() << endl;

    cout<<"After Pop top element is:"<<endl;
    st.pop(55);
 
    cout << st.topElement() << endl;
    return 0;
}