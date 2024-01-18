#include <iostream>
#include <string>

using namespace std;


class BankAccount{
private:
    string accountName;
    string accountNumber;
    double balance;


public:
    BankAccount(string number, string name): accountNumber(number), accountName(name), balance(0.0) {}

    void deposit(double amount){
        if (amount > 0){
            balance += amount;
        }
    }

    bool withdraw(double amount){
        if (amount > 0 && amount <= balance){
            balance -= amount;
            return true;
        }
        return false;
    }

    double getBalance() const {
        return balance;
    }

    void printAccountInfo() const {
        cout << "Account Name: " << accountName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main(){
    BankAccount myAccount("123456342", "John");

    cout << "Initial balance: " << endl;
    myAccount.printAccountInfo();

    myAccount.deposit(1000);
    cout << "After depositing 1000: " << endl;
    myAccount.printAccountInfo();


    if (myAccount.withdraw(500)){
        cout << "After withdrawing 500: " << endl;
        myAccount.printAccountInfo();
    } else {
        cout << "Withdraw failed" << endl;
    }

    if (myAccount.withdraw(2000)){
        cout << "\n After withdrawing 2000: " << endl;
        myAccount.printAccountInfo();
    } else {
        cout << "Withdraw failed" << endl;
    }
    return 0;
}