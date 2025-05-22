// 16. Reverse Binary of a Number Input: 6 (Binary: 110) → Reverse: 011 → Decimal Output: 3
#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int decimalOfRevBin(int n)
{
    int sum = 0, ans = 1;
    while (n)
    {
        int rem = n % 10;
        sum = sum + rem * ans;
        ans *= 2;
        n = n / 10;
    }
    return sum;
}

string reverseOfBInary(int BinaryDigit)
{
    string reverse = " ";
    while (BinaryDigit > 0)
    {
        int remOfbin = BinaryDigit % 10;
        reverse = reverse + to_string(remOfbin);
        BinaryDigit = BinaryDigit / 10;
    }
    return reverse;
}

void conversion(int n)
{
    string binary = " ";
    while (n)
    {
        int rem = n % 2;
        binary = to_string(rem) + binary;
        n = n / 2;
    }
    int BinaryDigit = stoi(binary);

    cout << "Given numbers binary: " << BinaryDigit << endl;

    cout << "Reverse of Binary number is : " << reverseOfBInary(BinaryDigit) << endl;

    int BinOfRev = stoi(reverseOfBInary(BinaryDigit));
    cout << "Decimal of Reverse binary: " << decimalOfRevBin(BinOfRev) << endl;
}
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    conversion(num);
}