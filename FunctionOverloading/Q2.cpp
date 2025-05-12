// 2. Implement overloaded functions to find the maximum value between two integers, two floats, and two doubles.
#include <bits/stdc++.h>
using namespace std;
void maxValue(double n1, double n2)
{
    cout << "Fxn 3 calling";

    if (n1 > n2)
    {
        cout << "\n The max value is: " << n1;
    }
    else
    {
        cout << "\n The max value is: " << n2;
    }
}

void maxValue(float n1, float n2)
{
    cout << "\n Fxn 2 calling";

    if (n1 > n2)
    {
        cout << "\n The max value is: " << n1;
    }
    else
    {
        cout << "\n The max value is: " << n2;
    }
}

void maxValue(int n1, int n2)
{
    cout << " Fxn 1 calling";
    if (n1 > n2)
    {
        cout << "\n The max value is: " << n1;
    }
    else
    {
        cout << "\n The max value is: " << n2;
    }
}

int main()
{
    maxValue(2, 6);
    maxValue(2.5f, 2.7f);
    maxValue(2.33, 2.34);
}