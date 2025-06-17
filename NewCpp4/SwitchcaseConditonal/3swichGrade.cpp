/*
3. Grade Classification :

A corresponds to Excellent
B corresponds to Good
C corresponds to Average
D corresponds to Below Average
F corresponds to Fail
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char grade;
    cout << "Enter grade(A-Z): ";
    cin >> grade;
    switch (grade)
    {
    case 'A':
        cout << "Excellent";
        break;
    case 'B':
        cout << "Good";
        break;
    case 'C':
        cout << "Average";
        break;
    case 'D':
        cout << "Below Average";
        break;
    case 'F':
        cout << "Fail";
        break;
    default:
        cout << "Invalid Grade";
        break;
    }
}