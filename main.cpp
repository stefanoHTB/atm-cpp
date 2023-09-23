#include <iostream>
using namespace std;

class ATM {
private:
    double balance;

public:
    ATM(double initialBalance) {
        balance = initialBalance;
    }

    void displayMenu() {
        cout << "ATM Menu:" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Funds" << endl;
        cout << "3. Withdraw Funds" << endl;
        cout << "4. Exit" << endl;
    }

    void checkBalance() {
        cout << "Your account balance is: $" << balance << endl;
    }

    void depositFunds() {
        double amount;
        cout << "Enter the amount to deposit: $";
        cin >> amount;
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. Your new balance is: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdrawFunds() {
        double amount;
        cout << "Enter the amount to withdraw: $";
        cin >> amount;
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. Your new balance is: $" << balance << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient funds." << endl;
        }
    }
};

int main() {
    double initialBalance;
    cout << "Welcome to the ATM!" << endl;
    cout << "Enter your initial account balance: $";
    cin >> initialBalance;

    ATM atm(initialBalance);
    int choice;

    do {
        atm.displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                atm.checkBalance();
                break;
            case 2:
                atm.depositFunds();
                break;
            case 3:
                atm.withdrawFunds();
                break;
            case 4:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
        }
    } while (choice != 4);

    return 0;
}
