// 60. Create a C++ function that takes a person’s cholesterol level as input and
//  uses nested if-else statements to determine if it is normal, borderline, or high.
#include <bits/stdc++.h>
using namespace std;

string colestroLevel(int col)
{
    if (col >= 0)
    {
        if (col <= 200)
        {
            return "Normal colestrol level";
        }
        else if (col <= 239)
        {
            return "borderline colestrol level";
        }
        else
        {
            return "high level of colestrol";
        }
    }
    else
    {
        return "invalid colestrol level";
    }
}
int main()
{
    int col;
    cout << "Enter cholesterol level (mg/dL): ";
    cin >> col;

    cout << colestroLevel(col);
}