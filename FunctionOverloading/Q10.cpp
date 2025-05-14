// 10. Implement overloaded functions to subtract two integers, two floats, and two doubles.
#include <bits/stdc++.h>
using namespace std;

void subtract(double num1, double num2)
{
    cout << "enter two numbers (double): " << endl;
    cin >> num1 >> num2;
    double subtracOfVal = num1 - num2;
    cout << "result after subtracting : " << subtracOfVal << endl;
}

void subtract(float num1, float num2)
{
    cout << "enter two numbers (float): " << endl;
    cin >> num1 >> num2;
    float subtracOfVal = num1 - num2;
    cout << "result after subtracting : " << subtracOfVal << endl;
}

void subtract(int num1, int num2)
{
    cout << "enter two numbers (integers): " << endl;
    cin >> num1 >> num2;
    int subtracOfVal = num1 - num2;
    cout << "result after subtracting : " << subtracOfVal << endl;
}

int main()
{
    int num1, num2;
    float n, m;
    double a, b;
    subtract(num1, num2);
    subtract(n, m);
    subtract(a, b);
}