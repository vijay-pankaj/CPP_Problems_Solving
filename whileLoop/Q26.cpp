// 26. Find the Difference between Product and Sum of Digits Input: 123 → Product: 6, Sum: 6 → Output: 0
#include <bits/stdc++.h>
using namespace std;

int DiffProAndSum(int n)
{
    int sum = 0, product = 1;
    while (n > 0)
    {
        int rem = n % 10;
        sum += rem;
        product *= rem;
        n /= 10;
    }
    return product - sum;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << DiffProAndSum(num);
}