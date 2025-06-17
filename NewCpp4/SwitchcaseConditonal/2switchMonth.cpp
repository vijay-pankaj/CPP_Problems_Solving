/*
2. Month of the Year :

Input: 12
Output: December

Explanation:
The program checks the number (1–12) and matches it with the month name using a switch statement.

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int month;
    cout << "Enter month Code: ";
    cin >> month;
    switch (month)
    {
    case (1):
        cout << "January";
        break;
    case (2):
        cout << "February";
        break;
    case (3):
        cout << "March";
        break;
    case (4):
        cout << "April";
        break;
    case (5):
        cout << "May";
        break;
    case (6):
        cout << "June";
        break;
    case (7):
        cout << "July";
        break;
    case (8):
        cout << "August";
        break;
    case (9):
        cout << "September";
        break;
    case (10):
        cout << "Otober";
        break;
    case (11):
        cout << "November";
        break;
    case (12):
        cout << "December";
        break;
    default:
        cout << "Invalid Month Code enter between (1-12)";
        break;
    }
}