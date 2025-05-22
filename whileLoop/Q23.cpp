// 23. Check if All Digits are Even Input: 2486 → Output: Yes Input: 2487 → Output: No
#include <bits/stdc++.h>
using namespace std;
bool isAllDigitEven(int n)
{
    while (n > 0)
    {
        int rem = n % 10;
        if (rem % 2 == 0)
        {
            n /= 10;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    if (isAllDigitEven(num))
    {
        cout << "All Digit are Even";
    }
    else
    {
        cout << "No, All digit are not Even";
    }
}