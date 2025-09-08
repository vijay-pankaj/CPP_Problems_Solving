/*
26. Return the sum of all even digits in the number.
    Example: 123456 → 2+4+6 = 12
*/
#include<iostream>
using namespace std;
int sumofEveDigit(int n){
    int sum=0;
    while(n){
        int digit=n%10;
        if(digit%2==0)sum+=digit;
        n/=10;
    }
    return sum;
}
int main(){
int num=123456;
cout<<sumofEveDigit(num);
}