// 36. Check if All Digits Are Same Input: 2222 → Output: Yes Input: 2232 → Output: No;
#include <bits/stdc++.h>
using namespace std;
bool isAllDigitSame(int n)
{
    int frem = n % 10;
    while (n > 0)
    {
        int secrem = n % 10;
        if (frem == secrem)
        {
            n = n / 10;
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
    cout << "enter number: ";
    cin >> num;
    if (isAllDigitSame(num))
    {
        cout << "Yes, All digit same";
    }
    else
    {
        cout << "No,All Digit are not same";
    }
}