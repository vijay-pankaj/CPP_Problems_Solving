// 33. Check if Number is Binary Palindrome Input: 9 → Binary: 1001 → Palindrome → Output: Yes
#include <bits/stdc++.h>
using namespace std;

bool ispalindrome(int n)
{
    int rev = 0, originalNum = n;
    while (n > 0)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n=n/10;
    }
    return originalNum == rev;
}

bool DeciToBin(int n)
{
    string str = " ";
    while (n > 0)
    {
        int rem = n % 2;
        str = to_string(rem) + str;
        n = n / 2;
    }
    int BinaryNUm = stoi(str);
    if (ispalindrome(BinaryNUm))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    if(DeciToBin(num)){
        cout<<"Yes,Given number is binary palindrome";
    }else{
        cout<<"NO,Given number is Not binary palindrome";

    }
}