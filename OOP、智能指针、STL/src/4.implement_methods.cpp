#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Account{

private:
    string name {"None"};
    double balance {0.0};

public:
    void set_balance(double amount){
        balance = amount;};

    double get_balance(){return balance;};

    void set_name(string n);
    string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};


void Account::set_name(string n){
    this->name = n;
}

string Account::get_name(){
    return name;
}

bool Account::deposit(double amount){
    balance += amount;
    cout << name << "刚存入" << amount << "元，现在余额为" << balance << "元" << endl;
    return true; 
}

bool Account::withdraw(double amount){
    if (balance >= amount){
        balance -= amount;
        cout << name << "刚取出" << amount << "元，现在余额为" << balance << "元" << endl;
        return true;
    }else{
        cout << name << "余额不足，无法取出" << amount << "元" << endl;
        return false;
    }
}

int main(){
    Account frank_account;
    frank_account.set_name("Frank");
    frank_account.set_balance(1000.0);
    frank_account.deposit(200.0);
    frank_account.withdraw(500.0);
    frank_account.withdraw(1500.0);
    return 0;
}