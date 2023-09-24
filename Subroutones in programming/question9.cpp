/* 
Implement a program that uses dynamic memory allocation to simulate a banking system
that stores customer information, account details, and transactions.
*/
#include <iostream>
#include <string>
using namespace std;

struct RA2211003010002_Account {
    int RA2211003010002_accountNumber;
    string RA2211003010002_customerName;
    double RA2211003010002_balance;
};

void RA2211003010002_createAccount(RA2211003010002_Account*& RA2211003010002_accounts, int& RA2211003010002_numAccounts) {
    RA2211003010002_numAccounts++;
    RA2211003010002_Account* RA2211003010002_tempAccounts = new RA2211003010002_Account[RA2211003010002_numAccounts];

    for (int i = 0; i < RA2211003010002_numAccounts - 1; i++) {
        RA2211003010002_tempAccounts[i] = RA2211003010002_accounts[i];
    }

    cout << "Enter customer name: ";
    cin.ignore();
    getline(cin, RA2211003010002_tempAccounts[RA2211003010002_numAccounts - 1].RA2211003010002_customerName);

    cout << "Enter initial balance: ";
    cin >> RA2211003010002_tempAccounts[RA2211003010002_numAccounts - 1].RA2211003010002_balance;

    RA2211003010002_tempAccounts[RA2211003010002_numAccounts - 1].RA2211003010002_accountNumber = RA2211003010002_numAccounts;

    delete[] RA2211003010002_accounts;
    RA2211003010002_accounts = RA2211003010002_tempAccounts;

    cout << "Account created successfully with account number: " << RA2211003010002_numAccounts << endl;
}

void RA2211003010002_deposit(RA2211003010002_Account* RA2211003010002_accounts, int RA2211003010002_numAccounts, int accountNumber) {
    for (int i = 0; i < RA2211003010002_numAccounts; i++) {
        if (RA2211003010002_accounts[i].RA2211003010002_accountNumber == accountNumber) {
            double amount;
            cout << "Enter deposit amount: ";
            cin >> amount;
            RA2211003010002_accounts[i].RA2211003010002_balance += amount;
            cout << "Deposit successful. Updated balance: " << RA2211003010002_accounts[i].RA2211003010002_balance << endl;
            return;
        }
    }
    cout << "Account not found." << endl;
}

void RA2211003010002_withdraw(RA2211003010002_Account* RA2211003010002_accounts, int RA2211003010002_numAccounts, int accountNumber) {
    for (int i = 0; i < RA2211003010002_numAccounts; i++) {
        if (RA2211003010002_accounts[i].RA2211003010002_accountNumber == accountNumber) {
            double amount;
            cout << "Enter withdrawal amount: ";
            cin >> amount;
            if (RA2211003010002_accounts[i].RA2211003010002_balance >= amount) {
                RA2211003010002_accounts[i].RA2211003010002_balance -= amount;
                cout << "Withdrawal successful. Updated balance: " << RA2211003010002_accounts[i].RA2211003010002_balance << endl;
            } else {
                cout << "Insufficient balance." << endl;
            }
            return;
        }
    }
    cout << "Account not found." << endl;
}

void RA2211003010002_displayAccounts(RA2211003010002_Account* RA2211003010002_accounts, int RA2211003010002_numAccounts) {
    cout << "========== Account Details ==========" << endl;
    for (int i = 0; i < RA2211003010002_numAccounts; i++) {
        cout << "Account Number: " << RA2211003010002_accounts[i].RA2211003010002_accountNumber << endl;
        cout << "Customer Name: " << RA2211003010002_accounts[i].RA2211003010002_customerName << endl;
        cout << "Balance: " << RA2211003010002_accounts[i].RA2211003010002_balance << endl;
        cout << "------------------------------------" << endl;
    }
}

int main() {
    RA2211003010002_Account* RA2211003010002_accounts = nullptr;
    int RA2211003010002_numAccounts = 0;

    while (true) {
        cout << "======= Banking System =======\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Display Accounts\n";
        cout << "5. Quit\n";
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                RA2211003010002_createAccount(RA2211003010002_accounts, RA2211003010002_numAccounts);
                break;
            case 2:
                int depositAccountNumber;
                cout << "Enter account number for deposit: ";
                cin >> depositAccountNumber;
                RA2211003010002_deposit(RA2211003010002_accounts, RA2211003010002_numAccounts, depositAccountNumber);
                break;
            case 3:
                int withdrawAccountNumber;
                cout << "Enter account number for withdrawal: ";
                cin >> withdrawAccountNumber;
                RA2211003010002_withdraw(RA2211003010002_accounts, RA2211003010002_numAccounts, withdrawAccountNumber);
                break;
            case 4:
                RA2211003010002_displayAccounts(RA2211003010002_accounts, RA2211003010002_numAccounts);
                break;
            case 5:
                cout << "Quitting..." << endl;
                delete[] RA2211003010002_accounts;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}