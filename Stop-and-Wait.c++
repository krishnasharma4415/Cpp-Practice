#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void stopAndWait(int frames)
{
    srand(time(0));

    for (int i = 0; i < frames; i++)
    {
        cout << "Sending frame " << i << endl;

        // Simulate acknowledgment with random success/failure
        if (rand() % 2)
        {
            cout << "Acknowledgment received for frame " << i << endl;
        }
        else
        {
            cout << "Acknowledgment not received. Resending frame " << i << endl;
            i--; // Resend the frame
        }
    }
}

int main()
{
    int frames;
    cout << "Enter the number of frames: ";
    cin >> frames;

    stopAndWait(frames);
    return 0;
}
