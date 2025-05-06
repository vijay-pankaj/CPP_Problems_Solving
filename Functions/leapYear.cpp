// 49. Write a C++ function that takes the year as input and uses nested if-else statements to determine
// if it is a century year (ends with 00) and if it is a leap year.
#include <bits/stdc++.h>
using namespace std;

string isLeapYear(int year)
{
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            return "leap year and a century year ";
        }
        else
        {
            return "not a leap yeaar but a century year ";
        }
    }
    else
    {
        if (year % 4 == 0)
        {
            return "Not century year but leap year ";
        }
        else
        {
            return "Not century year and also not leap year";
        }
    }
}

int main()
{
    int year;
    cout << "enter year: ";
    cin >> year;
    if (year < 0)
    {
        cout << "enter a valid year ";
    }
    else
    {
        cout << "given year " << isLeapYear(year);
    }
}