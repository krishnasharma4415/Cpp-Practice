// Program to calculate sum of even numbers in a given range
#include <iostream>
using namespace std;

int sumOfEvenOdd(int m, int n)
{
    if (m > n)
        return 0;
    else
        return m + sumOfEvenOdd(m + 2, n);
}

int main()
{
    int m, n;
    cin >> m >> n;
    int result = sumOfEvenOdd(m, n);
    cout << result << endl;
    return 0;
}