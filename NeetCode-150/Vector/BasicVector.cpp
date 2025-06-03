#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <char> vec(3,0);
    // vector <char> vec= {"a", "b", "c","d"}; // not working
       vector<char> vecChar = {'a', 'b', 'c', 'd'};

    // forEach loop syntex
    for(int i : vec){
        cout << i << endl;
    }
    for(char val : vecChar){
        cout << val << endl;
    }

    return 0;
}