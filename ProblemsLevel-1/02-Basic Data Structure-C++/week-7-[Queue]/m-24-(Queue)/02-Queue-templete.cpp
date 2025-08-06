#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(11);
    dq.push_front(22);

    for( auto i:dq){
        cout << i<<"-> ";
    }
    cout << endl;

    dq.pop_back();
     for( auto i:dq){
        cout << i<<"-> ";
    }
    cout << endl;
    cout<<"Size:"<<dq.size()<<endl;
    

    return 0 ;

}

