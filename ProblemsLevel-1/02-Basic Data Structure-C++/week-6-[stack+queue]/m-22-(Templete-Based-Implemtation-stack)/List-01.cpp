#include<bits/stdc++.h>
using namespace std;

// O(n)
void printList(list<int> l){

    // list<int>::iterator it =l.begin();
    auto it=l.begin();

    while (it != l.end())
    {
        cout << *it << " ";    // this is how [*] value access to print
        it++;
    }
    cout<<"\n\n";
    
}

int main(){

    list<int> l ;

    //push front O(1) 
    cout<<"✅ perform Push front is O(1): "<<endl;
    l.push_front(11); //11
    l.push_front(21); //21 11
    l.push_front(310); // 310 21 11
    printList(l);

    cout<<"✅ perform Push Back is O(1): "<<endl;
    l.push_back(22);
    l.push_back(32);
    l.push_back(42);
    printList(l);

    cout<<"✅ perform pop Back is O(1): "<<endl;
    l.pop_back();
    l.pop_back();
    printList(l);

    cout<<"✅ perform pop front is O(1): "<<endl;
    l.pop_front();
    printList(l);
    cout<<"✅ Size of the linked list: "<<l.size()<<endl;

    cout<<"🔅 Insert at any position: "<<endl;

    auto it1 = l.begin();
    advance(it1,2);
    l.insert(it1,99999);
    printList(l);
    cout<<"✅ Size of the linked list: "<<l.size()<<endl;


    return 0;
}