#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
class bankAccount
{
private:
    double balance;
    long id;
public:
    bankAccount(double Balance,long Id)
    {
        balance=Balance;
        id=Id;
    }
    void deposit(double value)
    {
        if(value>0)
            balance=balance+value;
    }
    void withdraw(double value)
    {
        if(value<balance)
            balance=balance-value;
    }
    void details()
    {
        cout << "ID: " << id << endl;
        cout << "BALANCE: " << balance << endl;
    }
};
main()
{
    bankAccount acc1(5000,123160055);
    bankAccount acc2(6000,123160056);
    acc1.deposit(500);
    acc2.withdraw(600);
    acc1.details();
    acc2.details();
}
