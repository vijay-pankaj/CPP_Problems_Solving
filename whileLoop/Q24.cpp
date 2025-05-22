// 24. Count Even and Odd Digits Separately Input: 123456 → Output: Even: 3, Odd: 3
#include <bits/stdc++.h>
using namespace std;

void countEveOdd(int n)
{
    int even = 0, odd = 0;
    while (n > 0)
    {
        int rem = n % 10;
        if (rem % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        n /= 10;
    }
    cout << "Even value are: " << even << endl;
    cout << "Odd values are: " << odd << endl;
}

int main()
{
    int num;
    cout << "enter number: ";
    cin >> num;
    countEveOdd(num);
}