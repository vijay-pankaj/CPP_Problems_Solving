// 35. Check if Digits are All Unique Input: 1234 → Output: Yes Input: 1223 → Output: No
#include <bits/stdc++.h>
using namespace std;

bool isAllUniqueDigit(int n)
{
    int frem = n % 10;
    n=n/10;
    while (n > 0)
    {

        int secrem = n % 10;
        if (frem != secrem)
        {
            frem=secrem;
            n=n/10;
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
    if (isAllUniqueDigit(num))
    {
        cout << "Yes, Given all Digit are unique";
    }
    else
    {
        cout << "No, Given all Digit are Not unique";
    }
}