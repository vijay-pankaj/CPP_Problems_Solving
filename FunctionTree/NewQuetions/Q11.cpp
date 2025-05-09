// User se 5 input lena hai agar unka sum 50 se zyada hota hai to ek function call karna hai jo 1-50 ka sum print karega.
//  Agar sum 50 se kam hota hai to ek function call karna hai jo 1 character input lekar check karega ki wo consonant hai ya nahi.
//  Agar sum 50 hota hai to check karna hai ki sum even hai ya odd
#include <bits/stdc++.h>
using namespace std;

string isEvenOrOdd(int sum)
{
    if (sum % 2 == 0)
    {
        return "Even";
    }
    else
    {
        return "Odd";
    }
}
string isConsonent(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            return "Not Conssonent";
        }
        else
        {
            return "Consonent";
        }
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            return "Not Conssonent";
        }
        else
        {
            return "Consonent";
        }
    }
    else
    {
        return "Enter valid char";
    }
}

int printSum()
{
    int sum = 0;
    for (int i = 1; i <= 50; i++)
    {
        sum += i;
    }
    return sum;
}

void isSum(int n1, int n2, int n3, int n4, int n5)
{
    int sum = n1 + n2 + n3 + n4;
    if (sum > 50)
    {
        cout << "Sum of 1 to 50 is: " << printSum();
    }
    else if (sum < 50)
    {
        char ch;
        cout << "enter a character: ";
        cin >> ch;
        cout << "Given character is: " << isConsonent(ch);
    }
    else
    {
        cout << "Sum of number is: " << isEvenOrOdd(sum);
    }
}
int main()
{
    int n1, n2, n3, n4, n5;
    cout << "Enter five numbers: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    isSum(n1, n2, n3, n4, n5);
}