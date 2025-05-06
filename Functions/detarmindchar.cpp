// Write a C++ function that takes a character as input and uses nested if-else statements to determine 
// if it is a vowel and if it is uppercase or lowercase, or if it is a consonant.
#include <bits/stdc++.h>
using namespace std;
string determindchar(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            return "lowercase letter and Vowel";
        }
        else
        {
            return "Lower case and Consonent";
        }
    }
        
   else  if (ch >= 'A' && ch <= 'Z')
    {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            return "Upper case letter and vowel";
        }
        else
        {
            return "Upper case letter and Consonet";
        }
    } else{
        return "Not an alphabetic character";
    }

}

int main()
{
    char ch;
    cout << "Enter character: ";
    cin >> ch;
    cout << "Given char is " << determindchar(ch);
}