// Product of Digits
//  Input: 123 → Output: 6
#include <bits/stdc++.h>
using namespace std;
int productOfDigit(int num)
{
    int productOfNum = 1;
    while (num > 0)
    {
        int rem = num % 10;
        productOfNum *= rem;
        num /= 10;
    }
    return productOfNum;
}
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << productOfDigit(num);
}