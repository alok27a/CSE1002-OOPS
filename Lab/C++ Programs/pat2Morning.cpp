#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class SavingsAccount
{
    float savingsBalance;
public:
    static int annualInterestRate;
    float bal1;
    float final;

    void get()
    {
        cin >> savingsBalance;
    }
    float getof()
    {
        return savingsBalance;
    }
    static void modifyInterestRate()
    {
        annualInterestRate = 4;
    }
    float monthlyInterest(float a)
    {
        float interest;
        interest = (a * annualInterestRate) / 12;
        return interest;
    }
};

int SavingsAccount::annualInterestRate = 3;

int main()
{
    SavingsAccount s1, s2;
    s1.get();
    s2.get();
    float a, b,sb1,sb2;
    sb1=s1.getof();
    sb2=s2.getof();
    a = s1.monthlyInterest(sb1);
    b = s2.monthlyInterest(sb2);

    s1.bal1 = sb1 + a;
    s2.bal1 = sb2 + b;
    cout << "Saver1 account balance is:" << s1.bal1 << endl;
    cout << "Saver2 account balance is:" << s2.bal1 << endl;

    cout << "After modifying interest" << endl;
    SavingsAccount::modifyInterestRate();

    s1.final = s1.bal1 + s1.monthlyInterest(s1.bal1);
    s2.final = s2.bal1 + s2.monthlyInterest(s2.bal1);
    cout << "Saver1 account balance is:" << s1.final << endl;
    cout << "Saver2 account balance is:" << s2.final << endl;

    return 1;
}