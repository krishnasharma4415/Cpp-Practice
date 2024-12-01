#include <iostream>
#include <vector>
using namespace std;

void goBackN(int frames, int windowSize)
{
    int sent = 0;

    while (sent < frames)
    {
        int windowEnd = min(sent + windowSize, frames);
        cout << "Sending frames: ";
        for (int i = sent; i < windowEnd; i++)
            cout << i << " ";
        cout << endl;

        // Simulate acknowledgment with a random error
        if (rand() % 4)
        { // Simulate success
            cout << "Acknowledgment received for all frames in window." << endl;
            sent += windowSize;
        }
        else
        { // Simulate error
            cout << "Error detected! Resending window starting from frame " << sent << endl;
        }
    }
}

int main()
{
    int frames, windowSize;
    cout << "Enter the number of frames: ";
    cin >> frames;
    cout << "Enter the window size: ";
    cin >> windowSize;

    goBackN(frames, windowSize);
    return 0;
}
