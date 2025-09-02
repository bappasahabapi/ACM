#include <iostream>
#include <vector>
#include <cmath> 
using namespace std;

void whoWinsTheGame(int n, vector<int>& chocolates) {
    int leftPointer = 0;
    int rightPointer = n - 1;
    int rajibChocolates = 0;
    int rakibChocolates = 0;
    bool isRajibTurn = true;

    while (leftPointer <= rightPointer) {
        if (chocolates[leftPointer] >= chocolates[rightPointer]) {
            if (isRajibTurn) {
                rajibChocolates += chocolates[leftPointer];
            } else {
                rakibChocolates += chocolates[leftPointer];
            }
            leftPointer++;
        } else {
            if (isRajibTurn) {
                rajibChocolates += chocolates[rightPointer];
            } else {
                rakibChocolates += chocolates[rightPointer];
            }
            rightPointer--;
        }
        isRajibTurn = !isRajibTurn; 
    }

    int difference = abs(rajibChocolates - rakibChocolates);
    
    if (rajibChocolates > rakibChocolates) {
        cout << difference << " Rajib" << endl;
    } else if (rakibChocolates > rajibChocolates) {
        cout << difference << " Rakib" << endl;
    } else {
        cout << difference << " Both" << endl;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> chocolates(n);
    for (int i = 0; i < n; i++) {
        cin >> chocolates[i];
    }

    whoWinsTheGame(n, chocolates);
    return 0;
}
