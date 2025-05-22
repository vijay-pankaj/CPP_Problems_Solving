// Sum of Digits
//  Input: 123 → Output: 6
#include <bits/stdc++.h>
using namespace std;

int sumOfDigit(int num)
{
    int sum = 0;
    while (num > 0)
    {
        int rem = num % 10;
        sum += rem;
        num /= 10;
    }
    return sum;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << sumOfDigit(num);
}