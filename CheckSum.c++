#include <iostream>
#include <vector>
using namespace std;

int calculateChecksum(vector<int> data, int wordSize)
{
    int sum = 0;
    for (int word : data)
        sum += word;

    int checksum = (1 << wordSize) - 1;         // Max value for the word size
    sum = (sum & checksum) + (sum >> wordSize); // Wrap around carry
    return checksum - sum;
}

int main()
{
    int wordSize, n;
    cout << "Enter word size (e.g., 8, 16, 32): ";
    cin >> wordSize;

    cout << "Enter the number of data words: ";
    cin >> n;
    vector<int> data(n);
    cout << "Enter the data words in hexadecimal: ";
    for (int i = 0; i < n; i++)
        cin >> hex >> data[i];

    int checksum = calculateChecksum(data, wordSize);
    cout << "Calculated Checksum: 0x" << hex << checksum << endl;

    cout << "Enter received data words: ";
    for (int i = 0; i < n; i++)
        cin >> hex >> data[i];

    int receivedChecksum;
    cout << "Enter received checksum: ";
    cin >> hex >> receivedChecksum;

    int totalSum = calculateChecksum(data, wordSize) + receivedChecksum;
    totalSum = (totalSum & ((1 << wordSize) - 1)) + (totalSum >> wordSize);

    if (totalSum == ((1 << wordSize) - 1))
        cout << "No Error Detected!" << endl;
    else
        cout << "Error Detected!" << endl;

    return 0;
}
