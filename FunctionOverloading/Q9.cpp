// 9. Implement overloaded functions to compare two integers, two floats, and two strings.
#include <bits/stdc++.h>
using namespace std;
void compare(string str1, string str2)
{
    cout << "Enter name: " << endl;
    cin >> str1;
    cout << "Enter surname: " << endl;
    cin >> str2;
    // if (str1 == str2)
    // {
    //     cout << "Both are same," << endl;
    // }
    // else
    // {
    //     cout << "not same," << endl;
    // }
    int v = 0, A = 0;
    for (auto str : str1)
    {
        v++;
    }
    for (auto str : str2)
    {
        A++;
    }
    if (v == A)
    {
        cout << "Both are equal, " << endl;
    }
    else if (v > A)
    {
        cout << str1 << " size is greater than " << str2 << endl;
    }
    else
    {
        cout << str2 << " size is greater than " << str1 << endl;
    }
}

void compare(float a, float b)
{
    cout << "Enter two numbers(float): " << endl;
    cin >> a >> b;
    if (a == b)
    {
        cout << "Both are Equale," << endl;
    }
    else if (a > b)
    {
        cout << a << " is greater than " << b << endl;
    }
    else
    {
        cout << b << " is greater than " << a << endl;
    }
}

void compare(int num1, int num2)
{
    cout << "Enter two numbers(integers): " << endl;
    cin >> num1 >> num2;
    if (num1 == num2)
    {
        cout << "Both are Equale," << endl;
    }
    else if (num1 > num2)
    {
        cout << num1 << " is greater than " << num2 << endl;
    }
    else
    {
        cout << num2 << " is greater than " << num1 << endl;
    }
}
int main()
{
    int num1, num2;
    float a, b;
    string str1, str2;
    compare(num1, num2);
    compare(a, b);
    compare(str1, str2);
}
