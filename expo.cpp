// Program to calculate the exponent value
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    double x;
    cin >> x;
    double expo = exp(x);
    cout << fixed << setprecision(4) << expo << endl;
    return 0;
}