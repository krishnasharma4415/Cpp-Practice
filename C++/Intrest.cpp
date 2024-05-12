// Program to calculate intrest for different accounts using overloading
#include <iostream>
#include <iomanip>
using namespace std;

double calculateInterest(float principal, float interestRate)
{
    return (principal * interestRate) / 100;
}

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
