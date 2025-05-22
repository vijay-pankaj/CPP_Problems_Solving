// Reverse a Number
//  Input: 1234 → Output: 4321
#include <bits/stdc++.h>
using namespace std;
int revNum(int num)
{
    int rev = 0;
    while (num > 0)
    {
        rev = (rev * 10) + num % 10;
        num /= 10;
    }
    return rev;
}
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    cout << revNum(num);
}