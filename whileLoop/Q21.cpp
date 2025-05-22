// 21. Check if Number is Automorphic A number whose square ends with the same digits as the number itself.
// Input: 76 → 76² = 5776 → Ends with 76 → Output: Yes
#include <bits/stdc++.h>
using namespace std;

bool isAutomorphic(int n)
{
    int originalNum = n, power = 1, count = 0;
    while (n)
    {
        n /= 10;
        count++;
    }
    while (count > 0)
    {
        power *= 10;
        count--;
    }
    int lastDigit = (originalNum * originalNum) % power;
    return originalNum == lastDigit;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    if (isAutomorphic(num))
    {
        cout << "Yes,Given number is Automorphic " << endl;
    }
    else
    {
        cout << "No,Given number Not Automorphic " << endl;
    }
}