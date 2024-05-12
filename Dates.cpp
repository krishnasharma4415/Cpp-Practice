// Program to check if the dates are equal
#include <iostream>
using namespace std;
struct Date
{
    int date;
    int month;
    int year;
};
bool IsEqual(const Date &date1, const Date &date2)
{
    return (date1.date == date2.date && date1.month == date2.month && date1.year == date2.year);
}

int main()
{
    Date examDate1, examDate2;
    cin >> examDate1.date >> examDate1.month >> examDate1.year;
    cin >> examDate2.date >> examDate2.month >> examDate2.year;
    if (IsEqual(examDate1, examDate2))
        cout << "Dates are Equal" << endl;
    else
        cout << "Dates are not Equal" << endl;
    return 0;
}