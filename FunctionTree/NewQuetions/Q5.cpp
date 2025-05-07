// User se ek input lena hai aur
// agar wo input positive hota hai to ek function call karna hai jo 2 values ko swap karega.
// Agar input negative hota hai to ek function call karna hai jo check karega ki wo entered number palindrome hai ya nahi.
// Agar input zero hota hai to ek function call karna hai jo ek input lekar check karega ki wo power of 2 hai ya nahi.
#include <bits/stdc++.h>
using namespace std;

string isPowerOfTwo(int n)
{
    while (n % 2 == 0)
    {
        n = n / 2;
    }
    if (n == 1)
    {
        return "number is power of two;";
    }
    else
    {
        return "number is Not power of two;";
    }
}
string ispalindrome(int num)
{
    int originalNum = num;
    int rev = 0;
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    if (originalNum == rev)
    {
        return "Number is palindrome ";
    }
    else
    {
        return "number is not palindrome";
    }
}

void swape(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "values after swape a : " << a << " and b : " << b;
}

void ispositive(int num)
{
    if (num > 0)
    {
        int a, b;
        cout << "enter a and b: ";
        cin >> a >> b;
        cout << "before swape value of a :" << a << " and b: " << b << "\n";
        swape(a, b);
    }
    else if (num < 0)
    {
        num = -(num);
        cout << ispalindrome(num);
    }
    else
    {
        int n;
        cout << "enter a number: ";
        cin >> n;
        cout << isPowerOfTwo(n);
    }
}
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    ispositive(num);
}