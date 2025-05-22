// 19. Check if Digits of Number are in Increasing Order Input: 1234 → Output: Yes Input: 132 → Output: No
#include <bits/stdc++.h>
using namespace std;

bool isNumIcreasing(int n)
{
    int frem=n%10;
    n=n/10;
    while (n > 0)
    {
        int rem = n % 10;
        if (frem > rem)
        {
            frem = rem;
        }
        else
        {
            return false;
        }
        n = n / 10;
    }
    return true;
}

int main()
{
    int num;
    cout << "Enter numbers : ";
    cin >> num;
    if (isNumIcreasing(num))
    {
        cout << "Yes,Given number are In Increasing order";
    }
    else
    {
        cout << "No,Given number are not  Increasing order";
    }
}