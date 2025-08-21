// g++ -std=c++11 bikash.cpp -o code && ./code 

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double balance = 1000.0;

    // Start with USSD code
    string code;
    cout << "Please dial *247# to start your transaction: ";
    cin >> code;

    if (code != "*247#") {
        cout << "Oops! Wrong code. Bye!" << endl;
        return 0;
    } 

    cout << "Welcome to Fake-Bikash App Bappa Da :)" << endl;
    cout << "--------------------------" << endl;

    while (true) {
        cout << "\nWhat do you want to do?" << endl;
        cout << "1. Check Your Balance" << endl;
        cout << "2. Cash In" << endl;
        cout << "3. Cash Out" << endl;
        cout << "4. Exit Fake-Bikash App" << endl;

        int choice;
        cout << "Enter your option (1-4): ";
        if (!(cin >> choice)) return 0; // if input breaks

        if (choice == 1) {
            cout << fixed << setprecision(2);
            cout << "Your Balance is: " << balance << " Tk" << endl;
        } else if (choice == 2) {
            cout << "Enter your Cash In amount: ";
            double inAmount;
            cin >> inAmount;

            if (inAmount <= 0) {
                cout << "Please enter more than 0." << endl;
                continue;
            }
            balance += inAmount;
            cout << fixed << setprecision(2);
            cout << "Balance Updated! Current balance: " << balance << " Tk" << endl;

        } else if (choice == 3) {
            cout << "Enter your Cash Out amount: ";
            double outAmount;
            cin >> outAmount;

            if (outAmount <= 0) {
                cout << "Please enter more than 0." << endl;
                continue;
            }
            if (outAmount > balance) {
                cout << "Not enough money!" << endl;
                continue;
            }
            balance -= outAmount;
            cout << fixed << setprecision(2);
            cout << "Balance Updated! Current balance: " << balance << " Tk" << endl;

        } else if (choice == 4) {
            cout << "----- Thanks for choosing Fake-Bikash App -----" << endl;
            return 0;
        } else {
            cout << "Please choose a number between 1 and 4." << endl;
        }
    }
}