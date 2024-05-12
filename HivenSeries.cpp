// Program to print Hiven Series ( 1!/1 + 2!/2 + 3!/3 + ... + n!/n)
#include <iostream>
using namespace std;
int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    int n;
    double sum = 0.0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        sum = sum + (static_cast<double>(fact(i))) / (static_cast<double>(i));
    cout << sum << endl;
    return 0;
}