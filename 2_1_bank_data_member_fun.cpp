/*2.Define a class to represent a bank account.Include the following members:  
  1. Data Memeber:                    ||2.Member Function
     ->Name of the depositor          ||  ->To assign values  
     ->Account Number                 ||  ->To deposite an account
     ->Type of Account                ||  ->To withdraw an ammount after checking balance
     ->Balance ammount in the account ||  ->To display name and balance
*/

#include <iostream>
using namespace std;

class Bank
{

    string name;
    int accountNum, option1;
    float balance = 10000;

public:
    void Account_details()
    {
        int option;
        string a = "Savings A/C", b = "Current A/C";

        cout << "Enter account no.: ";
        cin >> accountNum;
        cout << "Type 1 for Savings" << endl;
        cout << "Type 2 for Current" << endl;
        cout << "Select the Type of Account: " << endl;
        cin >> option;

        switch (option)
        {

        case 1:
            cout << "Savings A/c" << endl
                 << endl;
            break;

        case 2:
            cout << "Current A/c" << endl
                 << endl;
            break;

        default:
            cout << "Please enter a valid option..!!" << endl;
        }

        cout << "Enter account holder's name: ";
        cin >> name;
        cout << "Account balance: " << balance << endl;
    }
    void deposit()
    {
        float amount;
        cout << "Enter amount to deposit: " << endl;
        cin >> amount;
        balance = balance + amount;
        cout << "Transaction successful..!! " << endl;

        cout << "New balance is: " << balance << endl;
    }
    void withdraw()
    {
        float amount;

        cout << "Enter amount to withdraw: " << endl;
        cin >> amount;
        if (balance < amount)
        {
            cout << "No sufficient balance in your account..!!" << endl << endl;
        }
        else
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully..!!" << endl
                 << endl;
            cout << "Your new balance is: " << balance << endl;
        }
    }
    void transaction()
    {
        cout << "Type 1 for Deposit" << endl;
        cout << "Type 2 for Withdraw" << endl;
        cout << "Select Option: ";
        cin >> option1;
        switch (option1)
        {

        case 1:
            deposit();
            break;

        case 2:
            withdraw();
            break;

        default:
            cout << "Please enter a valid option !!" << endl;
        }
    }
};

int main()
{
    Bank Ashwini;
    Ashwini.Account_details();
    Ashwini.transaction();
}