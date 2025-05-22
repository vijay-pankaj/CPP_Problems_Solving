// 32. Count Total Bits Set to 1 in Binary Input: 13 → Binary: 1101 → Output: 3
#include <bits/stdc++.h>
using namespace std;

int TotalBitOfOne(int n)
{
    int count = 0;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            count++;
        }
        n = n / 2;
    }
    return count;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << TotalBitOfOne(num);
}