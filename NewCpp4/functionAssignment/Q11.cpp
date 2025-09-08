/*

11. Find the sum of digits, then return the square of that sum.
    Example: 123 → (1+2+3)² = 36
*/
#include<iostream>
using namespace std;
int sumOfDigitAndSqr(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum*sum;
}

int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<sumOfDigitAndSqr(n);
}