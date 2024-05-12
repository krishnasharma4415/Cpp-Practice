// Program to alphabatecally sort names of playlists
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string *> playlists;
    for (int i = 0; i < n; ++i)
    {
        string playlist;
        getline(cin, playlist);
        string *ptr = new string(playlist);
        playlists.push_back(ptr);
    }
    sort(playlists.begin(), playlists.end(), [](const string *a, const string *b)
         { return *a < *b; });
    for (const string *ptr : playlists)
    {
        cout << *ptr << endl;
    }
    for (string *ptr : playlists)
    {
        delete ptr;
    }
    return 0;
}