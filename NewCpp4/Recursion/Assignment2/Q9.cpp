/*

9. Decimal to Binary Conversion :

-> Task: Write a recursive function to convert a decimal number to binary.
*/
#include <iostream>
using namespace std;
void decimalToBinary(int n)
{
    if (n == 0)
        return;

    decimalToBinary(n / 2);
    cout << (n % 2);
}

int main()
{
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    if (num == 0)
    {
        cout << "Binary: 0" << endl;
    }
    else
    {
        cout << "Binary: ";
        decimalToBinary(num);
        cout << endl;
    }

    return 0;
}