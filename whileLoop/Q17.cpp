// 17. Remove All Zeros from a Number Input: 102030 → Output: 123
#include <bits/stdc++.h>
using namespace std;

// int revNumOfNonZer0(int n)
// {
//     int rev = 0;
//     while (n > 0)
//     {
//         rev = rev * 10 + n % 10;
//         n /= 10;
//     }
//     return rev;
// }

// int removeZero(int n)
// {
//     int newNum = 0;
//     while (n > 0)
//     {
//         int rem = n % 10;
//         if (rem != 0)
//         {
//             newNum = newNum * 10 + rem;
//         }
//         n = n / 10;
//     }
//     return revNumOfNonZer0(newNum);
// }
int removeZero(int n){
    string str=" ";
    int nonZero=0;
    while(n>0){
        int rem=n%10;
        if(rem!=0){
            str=to_string(rem)+str;
        }
        n=n/10;
    }
    return stoi(str);
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    // cout << removeZero(num);
    cout<<removeZero(num);
}