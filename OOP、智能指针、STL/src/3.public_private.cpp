#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account
{
private:
    string name {"None"};
    double balance {0.0};

public:
    bool deposit(double amount){
        balance += amount;
        cout << name << "刚存入" << amount << "元，现在余额为" << balance << "元" << endl;
        return true; 
    };
    bool withdraw(double amount){
        if (balance >= amount){
            balance -= amount;
            cout << name << "刚取出" << amount << "元，现在余额为" << balance << "元" << endl;
            return true;
        }else{
            cout << name << "余额不足，无法取出" << amount << "元" << endl;
            return false;
        }
    };

};

int main()
{
    Account jobs_account;

    jobs_account.deposit(1000.0);
    jobs_account.withdraw(500.0);

    return 0;

}