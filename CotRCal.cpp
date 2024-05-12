// Program to calculate total cost with weight and rate
#include <iostream>
#include <iomanip>
using namespace std;
class CotRCal
{
    double weight;
    double rate;
    double totalCost;

    CotRCal()
    {
        weight = 0.0;
        rate = 0.0;
        totalCost = 0.0;
    }

    CotRCal(double w, double r)
    {
        weight = w;
        rate = r;
        totalCost = weight * rate;
    }

    void display()
    {
        cout << "Weight: " << fixed << stdsetprecision(1) << weight << " kg" << endl;
        cout << "Rate: Rs. " << fixed << setprecision(1) << rate << " per kg" << endl;
        cout << "Total Cost: Rs. " << fixed << setprecision(2) << totalCost << endl;
    }
};

int main()
{
    double W, R;
    cin >> W;
    cin.ignore();
    cin>> R;

    CotRCal calculation(W, R);
    calculation.display();

    return 0;
}