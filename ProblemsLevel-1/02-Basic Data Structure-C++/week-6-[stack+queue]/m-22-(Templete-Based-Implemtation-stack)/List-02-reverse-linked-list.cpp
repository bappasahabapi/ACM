#include <iostream>
#include <list>

using namespace std;

// Function to print the linked list
void printList(list<int>& l) {
    for (int num : l) {
        cout << num << " ";
    }
    cout << endl;
}

// Function to reverse a linked list in-place
void reverseLinkedList(list<int>& l) {
    if (l.empty() || l.size() == 1) {
        return; // No need to reverse if list is empty or has only one element
    }

    auto it = l.begin();
    advance(it, 1); // Move iterator to the second element
    while (it != l.end()) {
        int temp = *it;
        it = l.erase(it); // Remove the current element from the list
        l.push_front(temp); // Insert the removed element at the front
    }
}

int main() {
    list<int> l = {1, 2, 3, 4, 5};

    cout << "Original List: ";
    printList(l);

    reverseLinkedList(l);

    cout << "Reversed List: ";
    printList(l);

    return 0;
}
