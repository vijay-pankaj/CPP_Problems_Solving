// 7. Convert Decimal to Binary Input: 10 → Output: 1010
#include <bits/stdc++.h>
using namespace std;

int DToB(int n)
{
    string str = " ";
    while (n > 0)
    {
        int rem = n % 2;
        str = to_string(rem) + str;
        n = n / 2;
    }
    return stoi(str);
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << DToB(num);
}