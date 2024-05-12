#include <iostream>
#include <cmath>

using namespace std;

// Base class Transport
class Transport
{
public:
    virtual void operate(int startLocation, int destination) = 0; // Pure virtual function
};

// Derived class TransportA
class TransportA : public Transport
{
public:
    void operate(int startLocation, int destination) override
    {
        int timeTaken = abs(startLocation - destination) * 2;
        cout << "Time taken: " << timeTaken << " seconds" << endl;
    }
};

// Derived class TransportB
class TransportB : public Transport
{
public:
    void operate(int startLocation, int destination) override
    {
        int timeTaken = abs(startLocation - destination) * 3;
        cout << "Time taken: " << timeTaken << " seconds" << endl;
    }
};

int main()
{
    int N;
    cin >> N;
    // Process each transport operation
    for (int i = 0; i < N; ++i)
    {
        char transportType;
        int startLocation, destination;

        // Input for each operation
        cin >> transportType >> startLocation >> destination;

        // Create objects for TransportA or TransportB based on input
        Transport *transport;
        if (tolower(transportType) == 'p')
        {
            transport = new TransportA();
        }
        else if (tolower(transportType) == 'f')
        {
            transport = new TransportB();
        }
        else
        {
            cerr << "Invalid transport type input." << endl;
            return 1; // Exit with an error code
        }

        // Perform the operation and display time taken
        transport->operate(startLocation, destination);

        // Free memory
        delete transport;
    }

    return 0;
}