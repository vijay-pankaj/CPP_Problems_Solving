// 34. Find Second Largest Digit in a Number Input: 98437 → Digits: [9,8,4,3,7] → Output: 8
#include <bits/stdc++.h>
using namespace std;
int secondLargest(int n)
{
    int max = 0, secondMax = 0;
    while (n > 0)
    {
        int rem = n % 10;
        if (rem > max)
        {
            secondMax = max;
            max = rem;
        }
        else if (rem > max && rem > secondMax)
        {
            secondMax = rem;
        }
        n /= 10;
    }
    return secondMax;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << secondLargest(num);
}
