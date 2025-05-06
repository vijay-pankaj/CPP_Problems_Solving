// Write a C++ function that takes an integer as input and uses nested if-else statements to determine
// if the number is a perfect number (sum of divisors equals the number) or not.
#include <bits/stdc++.h>
using namespace std;

bool isPerfectNumber(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    if (num < 0)
    {
        cout << "enter a positive number ";
    }
    else
    {
        if (isPerfectNumber(num))
        {
            cout << "Given number is a perfect number ";
        }
        else
        {
            cout << "Given number is Not a perfect number ";
        }
    }
}