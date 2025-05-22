// 8. Convert Decimal to Octal Input: 25 → Output: 31
#include <bits/stdc++.h>
using namespace std;
int DeciToOct(int n)
{
    string octal = " ";
    while (n > 0)
    {
        int rem = n % 8;
        octal = to_string(rem) + octal;
        n = n / 8;
    }
    return stoi(octal);
}

int main()
{
    int num;
    cout << "Enter number : ";
    cin >> num;
    cout << DeciToOct(num);
}