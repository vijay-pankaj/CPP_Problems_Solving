// User se 4 input lena hai aur unka sum karna hai.
// Agar sum negative hota hai to 2nd number ka reverse print karna hai (negative number ko positive mein convert karke).
// Agar sum positive hota hai to 4 ka factorial print karna hai.
// Agar sum zero hota hai to 4 inputs ka product print karna hai.
#include <bits/stdc++.h>
using namespace std;

int productOfIp(int num1, int num2, int num3, int num4)
{
    int product = num1 * num2 * num3 * num4;
    return product;
}
int reverseOf(int num2){
    int rev=0;
    while(num2>0){
        rev=rev*10+num2%10;
        num2=num2/10;
    }
    return rev;

}

int fact()
{
    int factorial = 1;
    for (int i = 1; i <= 4; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
void sum(int num1, int num2, int num3, int num4)
{
    int sum = num1 + num2 + num3 + num4;
    if (sum > 0)
    {
        cout << "factorial of 4 is " << fact();

    }
    else if (sum < 0)
    {
        if(num2<0){
            num2=-(num2);
        cout <<"reverse of second number is "<<reverseOf(num2);
        }else{
        cout <<"reverse of second number is "<<reverseOf(num2);
        }

    }
    else
    {
        cout << "product of inputs " << productOfIp(num1, num2, num3, num4);
    }
}
int main()
{
    int num1, num2, num3, num4;
    cout << "enter four number: ";
    cin >> num1 >> num2 >> num3 >> num4;

    sum(num1, num2, num3, num4);
}