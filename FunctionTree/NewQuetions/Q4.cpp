// User se 5 input lena hai aur agar sum greater than 50 hota hai to ek function call karna hai jo 1-50 ka sum print karega.
// Agar sum less than 50 hota hai to ek function call karna hai jo ek character input lekar check karega ki wo vowel hai ya nahi.
//  Agar sum 50 hota hai to check karna hai ki sum even hai ya odd.
#include <bits/stdc++.h>
using namespace std;

string isOddOrEven(int sum){
    if(sum%2==0){
        return "Even";
    }else{
        return "Odd";
    }
}


string isvowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        return "Given char is vowel ";
    }
    else
    {
        return "given char is not vowel ";
    }
}

int func1()
{
    int newsum = 0;
    for (int i = 1; i <= 50; i++)
    {
        newsum += i;
    }
    return newsum;
}

void sum(int n1, int n2, int n3, int n4, int n5)
{
    int sum = n1 + n2 + n3 + n4 + n5;
    if (sum > 50)
    {
        cout << " sum of 1 to 50 " << func1();
    }
    else if (sum < 50)
    {
        char ch;
        cout << "enter a character: ";
        cin >> ch;
        cout << isvowel(ch);
    }else{
        cout<<isOddOrEven(sum);
    }
}

int main()
{
    int n1, n2, n3, n4, n5;
    cout << "enter five numbers: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    sum(n1, n2, n3, n4, n5);
}