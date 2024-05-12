// Program to calculate highest and lowest score
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int numEmployee;
    cin >> numEmployee;
    if(numEmployee<=0)
    {
        cout << "Invalid input. Number of employee must be greater than 0." << endl;
        return 1;
    }
    
    int highestscore = INT_MIN;
    int lowestscore = INT_MAX;
    for(int i=1;i<=numEmployee;i++)
    {
        int score;
        cin >> score;
        if(score>highestscore)
            highestscore=score;
        if(score<lowestscore)
            lowestscore=score;
    }
    cout << highestscore << endl;
    cout << lowestscore << endl;
    return 0;
}