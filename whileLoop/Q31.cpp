// 31. Count Occurrence of a Specific Digit Input: 772367, digit: 7 → Output: 3
#include <bits/stdc++.h>
using namespace std;

int countSpecificNum(int n, int s)
{
    int count = 0;
    while (n > 0)
    {
        int rem = n % 10;
        if (rem == s)
        {
            count++;
        }
        n /= 10;
    }
    return count;
}

int main()
{
    int num, specificVal;
    cout << "Enter number: ";
    cin >> num;
    cout << "Enter specific value: ";
    cin >> specificVal;
    cout << countSpecificNum(num, specificVal);
}