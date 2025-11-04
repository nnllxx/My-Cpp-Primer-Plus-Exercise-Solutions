#include <iostream>
#include "account.h"
using namespace std;

Account::Account(const string & d, const string & a, double b){
    depositor = d;
    account_number = a;
    balance = b;
}

Account::~Account(){
    cout << "Bye, " << depositor << "!" << endl;
}

void Account::show(){
    cout << "depositor: " << depositor << endl;
    cout << "account_number: " << account_number << endl;
    cout << "balance: " << balance << endl;
}

void Account::deposit(double money){
    balance += money;
    cout << "+" << money << endl;
}

void Account::withdraw(double money){
    balance -= money;
    cout << "-" << money << endl;
}
