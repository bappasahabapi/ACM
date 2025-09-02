// g++ -std=c++11 01-patterns.cpp -o code && ./code
#include <iostream>
using namespace std;

void pattern1(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            cout << "* ";
        }
        cout << endl; // new line
    }
}
void pattern2(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl; // new line
    }
}
void pattern3(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        cout << endl; // new line
    }
}
void pattern4(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << row << " ";
        }
        cout << endl; // new line
    }
}
void pattern5(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row + 1; col++)
        {
            cout << "*";
        }
        cout << endl; // new line
    }
}
void pattern6(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row + 1; col++)
        {
            cout << col << " ";
        }
        cout << endl; // new line
    }
}
void pattern7(int n)
{
    for (int row = 1; row <= n; row++)
    {

        // for space
        for (int col = 1; col <= n - row; col++)
            cout << " ";

        // for start
        for (int col = 1; col <= 2 * row - 1; col++)
            cout << "*";

        // for space
        for (int col = 1; col <= n - row; col++)
            cout << " ";
        cout << endl;
    }
}

void pattern8(int n)
{
    for (int row = 1; row <= n; row++)
    {

        // for space
        for (int col = 2; col <= row; col++)
            cout << " ";

        // for start
        for (int col = 1; col <=(2*n - (2*row -1)); col++)
            cout << "*";

        // for space
        for (int col = 1; col <= row; col++)
            cout << " ";
        cout << endl;
    }
}
void pattern8a(int n)
{
    for (int row = 2; row <= n; row++) // skip the first row to avoid duplicate
    {
        for (int col = 1; col <= row - 1; col++)
            cout << " ";

        for (int col = 1; col <= (2 * n - (2 * row - 1)); col++)
            cout << "*";

        cout << endl;
    }
}

int main()
{

    // int n;
    // cin >> n;
 

    int n = 5;
    pattern8(n);

    return 0;
}