// Atmproject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;

class ATM {
    int m_pin;
    string m_accountholderName;
    string m_accountnumber;
    string m_bankname;
    double m_balance;

public:

    ATM(int pin, string accountholderName, string accountnumber, string bankname, double balance) {
        cout << "ATM PARAMETERIZED CONSTRUCTOR" << endl;
        m_pin = pin;
        m_accountholderName = accountholderName;
        m_accountnumber = accountnumber;
        m_bankname = bankname;
        m_balance = balance;
    }


    ATM(const ATM& src) {
        cout << "ATM COPY CONSTRUCTOR" << endl;
        m_pin = src.m_pin;
        m_accountholderName = src.m_accountholderName;
        m_accountnumber = src.m_accountnumber;
        m_bankname = src.m_bankname;
        m_balance = src.m_balance;
    }


    double checkbalance() {
        return m_balance;
    }


    void withdraw(double amount) {
        if (m_balance >= amount) {
            m_balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else {
            cout << "Insufficient balance. Withdraw cancelled." << endl;
        }
    }


    bool changepin(int oldpin, int newpin) {
        if (oldpin == m_pin) {
            m_pin = newpin;
            return true;
        }
        else {
            return false;
        }
    }


    void myaccountDetails() {
        cout << "Account Details:" << endl;
        cout << "Account Number: " << m_accountnumber << endl;
        cout << "accountholderName:" << m_accountholderName << endl;
        cout << "Bank Name: " << m_bankname << endl;
        cout << "Balance: " << m_balance << endl;
    }


    void deposit(double amount) {
        m_balance += amount;
        cout << "Deposited: " << amount << endl;
    }


    ~ATM() {
        cout << "Destructor called" << endl;
    }
};

int main() {

    ATM keerthicard(4589, "keerthi", "123456789", "SBI", 15000);


    double temp = keerthicard.checkbalance();
    cout << "Current balance: " << temp << endl;


    keerthicard.withdraw(10000);
    cout << "Updated balance after withdrawal: " << keerthicard.checkbalance() << endl;


    keerthicard.deposit(5000);
    cout << "Updated balance after deposit: " << keerthicard.checkbalance() << endl;


    keerthicard.myaccountDetails();


    ATM  keerthicard1 = keerthicard;
    cout << "hello" << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
