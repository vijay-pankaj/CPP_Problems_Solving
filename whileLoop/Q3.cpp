// Count Digits in a Number
//  Input: 5241 → Output: 4
#include <bits/stdc++.h>
using namespace std;

int countDigit(int num)
{
    int count = 0;
    while (num > 0)
    {
        num = num / 10;
        count++;
    }
    return count;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << countDigit(num);
}