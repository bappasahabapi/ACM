//  Stack implementation using templete based same as dynamic array based inplementation
#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

template <class T>  // add templete class
class Stack
{
public:
    T *arr;     //int *arr;
    int stack_size; // height
    int arr_capacity;

    Stack()
    {
        this->arr =new T[1];            //this->arr =new int[1];
        arr_capacity=1;                 //  this->capacity=1;
        stack_size = 0;

    }

    //Makes the array capacity twice
    void increse_size(){
        T *tempArr ;                        //int *tempArr;
        tempArr =new T[arr_capacity*2];   //tempArr=new int [arr_capacity*2];

        for (int i = 0; i <arr_capacity; i++)
            tempArr[i] = arr[i];
        swap(arr,tempArr);
        delete []tempArr;
        arr_capacity=arr_capacity*2;

    }


    // Add an element to the stack O(1)
    void push(T value)
    {
        if (stack_size+1 > arr_capacity)
        {
            increse_size();
        }
        stack_size = stack_size + 1; // []
        arr[stack_size - 1] = value;
    }

    // Remove an element from the stack O(1)
    void pop()
    {
        if (stack_size == 0)
        {
            cout << "Stack size is empty!" << endl;
            return ;
        }
         //arr[stack_size - 1] = 0; // show that no one can see remove element
        stack_size = stack_size - 1;
    }

    // Return the top element of the stack O(1)
    T top()
    {
        if (stack_size == 0)
        {
            cout << "Stack size is empty!" <<"\n";
            T a;
            return a;
        }
        return arr[stack_size - 1];
    }
};

int main()
{

    Stack <double> st;
    st.push(3.5);
    st.push(3.6);
    st.push(7.8);
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";


    Stack<char> st2;
    st2.push('b');
    st2.push('a');
    st2.push('p');
    cout<<st2.top()<<"\n";
    st2.pop();
    cout<<st2.top()<<"\n";
    st2.pop();
    cout<<st2.top()<<"\n";
    st2.pop();
    cout<<st2.top()<<"\n";
 



    return 0;
}
