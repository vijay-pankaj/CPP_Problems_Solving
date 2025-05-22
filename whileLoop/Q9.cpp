// 9. Convert Binary to Decimal Input: 1011 → Output: 11
#include <bits/stdc++.h>
using namespace std;

int BinToDeci(int n)
{
    int ans = 1, sum = 0;
    while (n > 0)
    {
        sum = sum + (n % 10) * ans;
        ans = ans * 2;
        n = n / 10;
    }
    return sum;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << BinToDeci(num);
}