// 8. Write overloaded functions to divide two integers, two floats, and two doubles.
#include <bits/stdc++.h>
using namespace std;

void Devide(double num1, double num2)
{
    cout << "Enter number(double): " << endl;
    cin >> num1 >> num2;
    double divideOfNum = num1 / num2;
    cout << "result after divide: " << divideOfNum << endl;
}

void Devide(float num1, float num2)
{
    cout << "Enter number(float): " << endl;
    cin >> num1 >> num2;
    float divideOfNum = num1 / num2;
    cout << "result after divide: " << divideOfNum << endl;
}

void Devide(int num1, int num2)
{
    cout << "Enter number(integers): " << endl;
    cin >> num1 >> num2;
    int divideOfNum = num1 / num2;
    cout << "result after divide: " << divideOfNum << endl;
}

int main()
{
    int num1, num2;
    float n, m;
    double p, q;
    Devide(num1, num2);
    Devide(n, m);
    Devide(p, q);
}