// 7. Implement overloaded functions to calculate the average of two integers, two floats, and three integers.
#include <bits/stdc++.h>
using namespace std;
void average(int num1, int num2, int num3)
{
    cout << "Enter three integer: " << endl;
    cin >> num1 >> num2 >> num3;
    int averageOFNum = (num1 + num2 + num3) / 3;
    cout << "Average of three integers is : " << averageOFNum << endl;
}

void average(float num1, float num2)
{
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;
    float averageOfNum = (num1 + num2) / 2;
    cout << "Average of two float numbers is : " << averageOfNum << endl;
}

void average(int num1, int num2)
{
    cout << "Enter two integers: " << endl;
    cin >> num1 >> num2;
    int averageOfNum = (num1 + num2) / 2;
    cout << "Average of two integer is : " << averageOfNum << endl;
}

int main()
{
    int a, b, c;
    float t, d;
    average(a, b);
    average(t, d);
    average(a, b, c);
}