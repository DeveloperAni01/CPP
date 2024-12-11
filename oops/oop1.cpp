// encapsulation

#include <bits/stdc++.h>

using namespace std;

class BankAccount
{
private:
    string accountNo;
    double balance;

public:
    BankAccount(string accNo, double bal) : accountNo(accNo), balance(bal) {}

    double getBalance() const
    {
        return balance;
    }

    //money deposit

    void deposit(double ammount){
        if (ammount > 0)
        {
            balance += ammount;
            cout << "Deposit ammount: " << ammount << endl;
        }
        else
        {
            cout << "Enter More Money" << endl;
        }
    }

    void withDraw(double ammount){
        if (ammount < 0)
        {
            cout << "PLease Enter Valid Ammount !!" << endl;
        }
        else if (ammount > balance)
        {
            cout << "Ammount Not More Than Balance" << endl;
        }
        else
        {
            cout << "WithDraw Succlessfully!! with Ammount" << ammount << endl;

            balance -= ammount;

            cout << "BAlance:" << balance << endl;
        }
        }
};

int main()
{
    BankAccount myAcc("1122443355", 500);
    myAcc.withDraw(100);
    myAcc.deposit(1000);

    double bal = myAcc.getBalance();


    cout << "BAlance: INR " << bal << endl;

    

    return 0;
}