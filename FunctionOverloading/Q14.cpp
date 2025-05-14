// 14. Write overloaded functions to find the minimum value between two integers, two floats, and two doubles.
#include <bits/stdc++.h>
using namespace std;

void minimum(double num1, double num2)
{
    cout << "Enter Num1 & Num2(double): ";
    cin >> num1 >> num2;
    if (num1 > num2)
    {
        cout << "minmum value is: " << num2 << endl;
    }
    else
    {
        cout << "minmum value is: " << num1 << endl;
    }
}

void minimum(float num1, float num2)
{
    cout << "Enter Num1 & Num2(float): ";
    cin >> num1 >> num2;
    if (num1 > num2)
    {
        cout << "minmum value is: " << num2 << endl;
    }
    else
    {
        cout << "minmum value is: " << num1 << endl;
    }
}

void minimum(int num1, int num2)
{
    cout << "Enter Num1 & Num2(Integers): ";
    cin >> num1 >> num2;
    if (num1 > num2)
    {
        cout << "minmum value is: " << num2 << endl;
    }
    else
    {
        cout << "minmum value is: " << num1 << endl;
    }
}

int main()
{
    int num1, num2;
    float n, m;
    double a, b;
    minimum(num1, num2);
    minimum(n, m);
    minimum(a, b);
}