#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    char name[50];
    double balance;

public:
    void createAccount();
    void showAccount() const;
    void depositAmount(double amount);
    void withdrawAmount(double amount);
    int getAccountNumber() const;
    double getBalance() const;
};

void BankAccount::createAccount() {
    cout << "Enter Account Number: ";
    cin >> accountNumber;
    cout << "Enter Account Holder Name: ";
    cin.ignore();
    cin.getline(name, 50);
    balance = 0; // Initial balance
    cout << "Account Created.\n";
}

void BankAccount::showAccount() const {
    cout << "Account Number: " << accountNumber << endl;
    cout << "Account Holder Name: " << name << endl;
    cout << "Balance: " << fixed << setprecision(2) << balance << endl;
}

void BankAccount::depositAmount(double amount) {
    balance += amount;
    cout << "Amount Deposited. New Balance: " << balance << endl;
}

void BankAccount::withdrawAmount(double amount) {
    if (balance >= amount) {
        balance -= amount;
        cout << "Amount Withdrawn. New Balance: " << balance << endl;
    } else {
        cout << "Insufficient Balance.\n";
    }
}

int BankAccount::getAccountNumber() const {
    return accountNumber;
}

double BankAccount::getBalance() const {
    return balance;
}

// Functions to write to and read from file
void writeAccount();
void displayAccount(int accNo);
void depositWithdraw(int accNo, double amount, bool isDeposit);

int main() {
    int choice;
    int accNo;
    double amount;

    do {
        cout << "\n===== Bank Management System =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Amount\n";
        cout << "3. Withdraw Amount\n";
        cout << "4. View Account Details\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            writeAccount();
            break;
        case 2:
            cout << "Enter Account Number: ";
            cin >> accNo;
            cout << "Enter Amount to Deposit: ";
            cin >> amount;
            depositWithdraw(accNo, amount, true);
            break;
        case 3:
            cout << "Enter Account Number: ";
            cin >> accNo;
            cout << "Enter Amount to Withdraw: ";
            cin >> amount;
            depositWithdraw(accNo, amount, false);
            break;
        case 4:
            cout << "Enter Account Number: ";
            cin >> accNo;
            displayAccount(accNo);
            break;
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}

// Function to create a new account and save to file
void writeAccount() {
    BankAccount acc;
    ofstream outFile;
    acc.createAccount();
    outFile.open("accounts.dat", ios::binary | ios::app);
    outFile.write(reinterpret_cast<char*>(&acc), sizeof(BankAccount));
    outFile.close();
}

// Function to display account details based on account number
void displayAccount(int accNo) {
    BankAccount acc;
    bool found = false;
    ifstream inFile;
    inFile.open("accounts.dat", ios::binary);
    if (!inFile) {
        cout << "File could not be opened! Press any key...\n";
        return;
    }

    while (inFile.read(reinterpret_cast<char*>(&acc), sizeof(BankAccount))) {
        if (acc.getAccountNumber() == accNo) {
            acc.showAccount();
            found = true;
        }
    }
    inFile.close();
    if (!found) {
        cout << "Account not found!\n";
    }
}

// Function to deposit or withdraw money from an account
void depositWithdraw(int accNo, double amount, bool isDeposit) {
    BankAccount acc;
    bool found = false;
    fstream file;
    file.open("accounts.dat", ios::binary | ios::in | ios::out);
    if (!file) {
        cout << "File could not be opened! Press any key...\n";
        return;
    }

    while (!file.eof() && found == false) {
        file.read(reinterpret_cast<char*>(&acc), sizeof(BankAccount));
        if (acc.getAccountNumber() == accNo) {
            if (isDeposit) {
                acc.depositAmount(amount);
            } else {
                acc.withdrawAmount(amount);
            }

            int pos = (-1) * static_cast<int>(sizeof(BankAccount));
            file.seekp(pos, ios::cur);
            file.write(reinterpret_cast<char*>(&acc), sizeof(BankAccount));
            found = true;
        }
    }
    file.close();
    if (!found) {
        cout << "Account not found!\n";
    }
}
