/* Create classes that capture bank customers and bank accounts. A Customer has a first and last name.
    An Account has a Customer and a balance. Make objects for two accounts held by the same Customer. */
#include <iostream>
#include <string>
using namespace std;
class Customer
{
public:
    string fname;
    string lname;
    void input()
    {
        cout << "Enter first name: ";
        cin >> fname;
        cout << "Enter last name: ";
        cin >> lname;
    }
};
class Account
{
public:
    Customer c1;
    double balance;
    void Balance()
    {
        cout << "Enter Balance: ";
        cin >> balance;
        cout << endl;
    }
    void Display()
    {
        cout << c1.fname << " " << c1.lname << endl;
        cout << "Balance: " << balance;
        cout << endl;
    }
};
int main()
{
    Account ac1;
    Account ac2;
    cout << "Enter Customer details for 1st Account: " << endl;
    ac1.c1.input();
    ac1.Balance();
    cout << "Enter Customer details for 2nd Account: " << endl;
    ac2.Balance();
    ac1.Display();
    ac2.Display();
    return 0;
}