//  Stack implementation using dynamic array

#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int stack_size; // height
    int arr_capacity;

    Stack()
    {
        this->arr =new int[1]; 
        arr_capacity=1; //  this->capacity=1; 
        stack_size = 0;
        
    }

    //Makes the array capacity twice
    void increse_size(){
        int *tempArr;
        tempArr=new int [arr_capacity*2];

        for (int i = 0; i <arr_capacity; i++)
            tempArr[i] = arr[i];
        swap(arr,tempArr);
        delete []tempArr;
        arr_capacity=arr_capacity*2;
        
    }


    // Add an element to the stack O(1)
    void push(int value)
    {
        if (stack_size > arr_capacity)
        {
            increse_size();
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
    // st.push(22);
    // cout << st.topElement() << "\n";
    // st.push(24);
    // cout << st.topElement() << endl;
    st.push(28);
    cout << st.topElement() << endl;
    st.push(32);
    cout << st.topElement() << endl;
    st.push(55);
    cout << st.topElement() << endl;

    cout<<"After Pop top element is:"<<endl;
    st.pop(55);
    st.pop(32);
    st.pop(28);
 
    cout << st.topElement() << endl;
    return 0;
}