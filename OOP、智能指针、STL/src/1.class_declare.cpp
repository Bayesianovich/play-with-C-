#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Account
{
    string name {"None"};
    double balance {0.0};

    bool deposit(double amount);
    bool withdraw(double amount);
};

int main()
{
    Account jobs_account;
    Account alice_account;

    Account accounts [] {jobs_account,alice_account};

    vector<Account> accounts_vec {jobs_account};
    accounts_vec.push_back(alice_account);

    Account *p_account = new Account();
    delete p_account;
    cout << "Accounts created and managed successfully." << endl;

    return 0;
}