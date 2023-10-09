//
// Created by 叶小辉 on 2023/5/4.
//

#include <iostream>

using namespace std;

class Account
{
public:
    Account( double InitialBalance )
    { balance = InitialBalance; }
    double GetBalance()
    { return balance; }
private:
    double balance;
};

double Account = 15.37;

void a() {
    int result = 0;
    double coefficient = 10.8;
    auto name = "Lady G.";

    int* number;
    *number = 10;

    int number2 = 10;
    int* pnumber = &number2;
    *pnumber = 20;

    class Account *Checking = new class Account( Account );
    class Account cc(Account ); // Qualifies Account as
    //  class name

    cout << "Opening account with a balance of: "
         << cc.GetBalance() << "\n";
}