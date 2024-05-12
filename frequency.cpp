// Program to calculate frequency of characters in a string
#include <iostream>
#include <cctype>
using namespace std;

void countCharacterFrequency(const string &str)
{
    int frequency[256] = {0}; // Assuming ASCII characters

    for (char ch : str)
    {
        if (isalpha(ch))
            frequency[static_cast<unsigned char>(ch)]++;
    }

    cout << "Character Frequencies:\n";
    for (int i = 0; i < 256; ++i)
    {
        if (frequency[i] > 0)
            cout << "'" << static_cast<char>(i) << "': " << frequency[i] << " times\n";
    }
}

int main()
{
    string inputString;

    cout << "Enter a string: ";
    getline(cin, inputString);

    countCharacterFrequency(inputString);

    return 0;
}
