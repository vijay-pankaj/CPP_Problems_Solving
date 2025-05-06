//  Write a C++ function that takes two integers as input and uses nested if-else statements to determine
//  if the fi rst is a multiple of the second, and if the second is a multiple of the fi rst.
#include <bits/stdc++.h>
using namespace std;

string isMultipleOfSec(int n1, int n2)
{
    if (n1 % n2 == 0 && n2 % n1 == 0)
    {
        return "n1 multiple of n2 and n2 also multiple og n2";
    }
    else if (n1 % n2 == 0)
    {
        return "n1 is multiple of n2";
    }
    else if (n2 % n1 == 0)
    {
        return "n2 is multiple of n1";
    }
    else
    {
        return " n1 and n2 both are not multiple of each ";
    }
}

int main()
{
    int n1, n2;
    cout << "enter n1: ";
    cin >> n1;

    cout << "enter n2: ";
    cin >> n2;

    cout << isMultipleOfSec(n1, n2);
}