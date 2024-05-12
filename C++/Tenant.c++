// Program to calculate rent
#include <iostream>
#include <iomanip>
using namespace std;

class Tenant
{
public:
    double monthlyIncome;

    Tenant(double income) : monthlyIncome(income) {}
};

class RentEligibility
{
public:
    static bool isEligible(double income)
    {
        return income >= 15000.0;
    }

    static void calculateRent(double income, double rentPercentage)
    {
        if (isEligible(income))
        {
            double rentAmount = income * (rentPercentage / 100.0);
            double tax = rentAmount * 0.05;

            cout << "Eligible" << endl;
            cout << "Rent Amount: " << fixed << setprecision(2) << rentAmount << endl;
            cout << "Tax: " << fixed << setprecision(2) << tax << endl;
        }
        else
        {
            cout << "Not eligible" << endl;
        }
    }
};

int main()
{
    double income, rentPercentage;
    cin >> income >> rentPercentage;

    Tenant tenant(income);

    RentEligibility::calculateRent(tenant.monthlyIncome, rentPercentage);

    return 0;
}
