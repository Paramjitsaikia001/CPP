#include <iostream>
#include<cstring>
using namespace std;
class BankAccount
{
    char UserName[30];
    int Accout_No;
    float Bank_Balance;
    float Withdrawal_Amount;
    float Deposit_Amount;

public:
    BankAccount()
    {
        strcpy(UserName,"Paramjit_saikia");
        Accout_No = 123456;
        Bank_Balance = 1000000.00;
    }
    void Bank_Details()
    {
        cout << "UserName: " << UserName;
        cout << "Account No: " << Accout_No;
        cout << "Bank Balance: " << Bank_Balance;
    }
    void getdetails()
    {
        cout << "Username: ";
        cin >> UserName;
        cout << "Accout NO: ";
        cin >> Accout_No;
    }
    void withdrawal()
    {
        cout << "enter amount for withdrawal : ";
        cin>>Withdrawal_Amount;
        if(Withdrawal_Amount>Bank_Balance){
            cout<<"insufficient Balane";
        }
        else{
        cout << "Your total Balance is : " << Bank_Balance - Withdrawal_Amount;
        }
    }
    void deposit()
    {
        cout << "enter amount fot deposit: ";
        cin>>Deposit_Amount;
        cout << "Your total Balance is : " << Bank_Balance + Deposit_Amount;
    }
};
int main()
{
    BankAccount User1;
    User1.Bank_Details();
    int clearification;
    cout << " what do you want ?\n withdrawal= Press 1 \n deposit=press 2 :";
    cin >> clearification;
    if (clearification == 1)
    {
        User1.withdrawal();
    }
    else if (clearification == 2)
    {
        User1.deposit();
    }
    else
    {
        cout << "Re-check";
    }
}
