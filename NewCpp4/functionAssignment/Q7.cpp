/*
7. Return the difference between the sum of digits at even and odd positions (1-based from right).
   Example: 123456 → even = 6+4+2, odd = 5+3+1 → 12−9
*/
#include<iostream>
using namespace std;
int diffEveOdd(int n){
    int sumEve=0,sumOdd=0;
    while (n)
    {
        int digit=n%10;
        if(digit%2==0)sumEve+=digit;
        else sumOdd+=digit;
        n/=10;
    }
    return sumEve-sumOdd;
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
   cout<< diffEveOdd(num);
}