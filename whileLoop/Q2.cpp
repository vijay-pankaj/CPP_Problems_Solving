// Check if a Number is Palindrome
//  Input: 121 → Output: Yes
#include <bits/stdc++.h>
using namespace std;

bool isPalindrom(int num)
{
    int orginalNum = num, NewNum = 0;
    while (num > 0)
    {
        NewNum = (NewNum * 10) + num % 10;
        num /= 10;
    }
    return orginalNum == NewNum;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    if (isPalindrom(num))
    {
        cout << "yes";
    }
    else
    {
        cout << "No";
    }
}