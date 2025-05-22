// 13. Find the First Digit of a Number Input: 9872 → Output: 9
#include <bits/stdc++.h>
using namespace std;

int FirstDigit(int n)
{
    int count = 0, originalNum = n;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    int power = 1;
    while (count - 1 > 0)
    {
        power = power * 10;
        count--;
    }
    int FirstDigitOfNum = originalNum / power;
    return FirstDigitOfNum;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << FirstDigit(num);
}