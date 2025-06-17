/*
4. Calculator :

Input: 5 3 +
Output: 8

Explanation:
The program takes two numbers and an operator (+, -, *, /) and performs the corresponding operation. In this case, 5 + 3 is 8.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter frst number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    char oprtr;
    cout << "Enter operator(+,-,*,/,%): ";
    cin >> oprtr;
    switch (oprtr)
    {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        cout << num1 / num2;
        break;
    case '%':
        cout << num1 % num2;
        break;
    default:
        cout << "Enter valid operator +,-,/,*,% ";
        break;
    }
}