#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void selectiveRepeat(int frames, int windowSize)
{
    vector<bool> ack(frames, false);
    int sent = 0;

    while (sent < frames)
    {
        cout << "Sending frames: ";
        for (int i = sent; i < min(sent + windowSize, frames); i++)
        {
            if (!ack[i])
                cout << i << " ";
        }
        cout << endl;

        for (int i = sent; i < min(sent + windowSize, frames); i++)
        {
            if (!ack[i])
            {
                if (rand() % 2)
                { // Simulate success
                    cout << "Acknowledgment received for frame " << i << endl;
                    ack[i] = true;
                }
                else
                {
                    cout << "Error in frame " << i << ". Resending." << endl;
                }
            }
        }

        while (sent < frames && ack[sent])
            sent++; // Slide the window
    }
}

int main()
{
    srand(time(0));
    int frames, windowSize;
    cout << "Enter the number of frames: ";
    cin >> frames;
    cout << "Enter the window size: ";
    cin >> windowSize;

    selectiveRepeat(frames, windowSize);
    return 0;
}
