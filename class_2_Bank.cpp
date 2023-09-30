#include <iostream>
#include <string>
using namespace std;

class Bank {
    public:
        string depositor_name;
        long long int account_number;
        float account_balance = 0;

        void setData()
        {
            cout << "Enter depositor name: ";
            getline(cin, depositor_name);
            cout << "Enter account number: ";
            cin >> account_number;
            cout << "Enter account balance: ";
            cin >> account_balance;
            cout << endl;
    };

    void deposit(){
        float deposit_amount;

        cout << "Enter deposit amount: ";
        cin >> deposit_amount;
        account_balance = account_balance + deposit_amount;
        cout << endl
             << "New balance: " << account_balance << endl << endl;
    };

    void withdraw(){  
        float withdraw_amount;

        cout << "Enter withdraw amount: ";
        cin >> withdraw_amount;
        account_balance = account_balance - withdraw_amount;
        cout << endl << "Balance left: " << account_balance;
    };

    void showAccountDetails(){
        cout << "Account holder name: " << depositor_name << endl;
        cout << "Account holder number: " << account_number << endl;
        cout << "Account holder balance: " << account_balance << endl << endl;
    }
};

int main () {
    Bank ob;
    ob.setData();
    ob.showAccountDetails();
    ob.deposit();
    ob.withdraw();
    return 0;
}