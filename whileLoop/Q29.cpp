// 29. Check if Number is Kaprekar Number Square of the number split into two parts, when added gives original.
//  Input: 45 → 45² = 2025 → 20+25 = 45 → Output: Yes
#include <bits/stdc++.h>
using namespace std;

bool isKarprekar(int n)
{
    int square = n * n, originalNum = n, count = 0;
    while (n)
    {
        n /= 10;
        count++;
    }

    int power = 1;
    while (count)
    {
        power *= 10;
        count--;
    }
    int leftNum = square % power;
    square = square / power;
    return originalNum == (leftNum + square);
}

int main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;
    if (isKarprekar(num))
    {
        cout << "Yes, Given number is karprekar Number" << endl;
    }
    else
    {
        cout << "No, Given number is Not karprekar Number" << endl;
    }
}