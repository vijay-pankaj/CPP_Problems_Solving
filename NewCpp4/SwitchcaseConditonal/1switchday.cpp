/*
1. Day of the Week :

Input: 3
Output: Tuesday

Explanation:
The input is a number representing a day of the week. 
The program uses a switch statement to print the corresponding day name.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int day;
    cout << "Enter day Code(1-7): ";
    cin >> day;
    switch (day)
    {
    case (1):
        cout << "sunday";
        break;
    case (2):
        cout << "Monday";
        break;
    case (3):
        cout << "Tuesday";
        break;
    case (4):
        cout << "Wednesday";
        break;
    case (5):
        cout << "Thuersday";
        break;
    case (6):
        cout << "Friday";
        break;
    case (7):
        cout << "saturday";
        break;
    default:
        cout << "Invalid day code Enter between(1-7)";
    }
}