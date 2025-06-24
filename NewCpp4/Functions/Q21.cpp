/*
6. Count Digits in a Number: Write a function to count the number of digits in a given number.
Input: 987654
Output: Digit count: 6
*/
#include <bits/stdc++.h>
using namespace std;

int countDigit(int n)
{
    int count = 0;
    while (n)
    {
        n /= 10;
        count++;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << countDigit(n);
}