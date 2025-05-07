// User se 3 input lena hai aur max value ko check karna hai.
// Agar max value 'b' hoti hai to ek function call karna hai jo 5 ka factorial print karega.
// Agar max value 'c' hoti hai to check karna hai ki 'c' power of 2 hai ya nahi.
// Agar max value 'a' hoti hai to apna naam print karna hai.
#include <bits/stdc++.h>
using namespace std;

string isPower(int c)
{
   while(c%2==0){
    c=c/2;
   }if(c==1){
    return "the number is power of 2 ";
   }else{
    return "the number is not power of 2 ";
   }
}
int fact()
{
    int factorial = 1;
    for (int i = 1; i <= 5; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int main()
{
    int a, b, c;
    cout << "enter three numbers: ";
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << "vijay";
    }
    else if (b > a && b > c)
    {
        cout << "factorial of 5 is: " << fact();
    }
    else
    {
        cout<<isPower(c);
    }
}