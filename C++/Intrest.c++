
#include <iostream>
#include <iomanip>
using namespace std;

// savings account
double calculateInterest(float principal, float interestRate)
{
    return (principal * interestRate) / 100;
}

// fixed deposit account
double calculateInterest(float principal, float interestRate, int years)
{
    return (principal * interestRate * years) / 100;
}

int main()
{
    float principal;
    float interestRate;
    int years;

    cin >> principal;
    cin >> interestRate;
    cin >> years;

    double savingsInterest = calculateInterest(principal, interestRate);
    double fixedDepositInterest = calculateInterest(principal, interestRate, years);

    cout << fixed << setprecision(2) << savingsInterest << endl;
    cout << fixed << setprecision(2) << fixedDepositInterest << endl;

    return 0;
}
