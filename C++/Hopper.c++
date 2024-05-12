// Program to calculate distance overloading * operator
#include <iostream>
#include <iomanip>
using namespace std;
class Pedal
{
private:
    float pedalRate;

public:
    Pedal(float rate) : pedalRate(rate) {}

    float operator*(float time)
    {
        return 0.5 * pedalRate * time * time;
    }
};

int main()
{
    float initialSpeed, pedalRate, timeTaken;
    cin >> initialSpeed >> pedalRate >> timeTaken;

    Pedal pedal(pedalRate);

    // Calculate the distance using operator overloading
    float distance = initialSpeed * timeTaken + pedal * timeTaken;

    cout << fixed << setprecision(2);
    cout << distance << " m" << std::endl;

    return 0;
}