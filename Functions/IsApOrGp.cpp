// 36. Write a C++ function that takes three integers as input and uses nested if-else statements to determine
//  if they form an arithmetic progression (AP), geometric progression (GP), or neither.
#include <bits/stdc++.h>
using namespace std;

string isApOrGp(int num1, int num2, int num3)
{
    if (num2 - num1 == num3 - num2)
    {
        return "AP";
    }
    else if (num1 != 0 && num2 != 0 && num2 * num2 == num1 * num3)
    {
        return "Gp";
    }
    else
    {
        return "neither Ap or Gp";
    }
}

int main()
{
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << isApOrGp(num1, num2, num3);
}