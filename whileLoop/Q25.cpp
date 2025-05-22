// 25. Form a Number by Reversing Only Even Digits Input: 123456 → Even Digits: 2, 4, 6 → Output: 642
#include <bits/stdc++.h>
using namespace std;
int revEvenNum(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int rem = n % 10;
        if (rem % 2 == 0)
        {
            rev = rev * 10 + rem;
        }
        n /= 10;
    }
    return rev;
}
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << revEvenNum(num);
}