/*
29. Find the sum of digits × product of digits.
    Example: 123 → sum = 6, product = 6 → result = 36
*/
#include<iostream>
using namespace std;

int sumOfDigitAndProd(int n){
    int sum=0,prod=1 ,result;
    while(n){
        int digit=n%10;
        sum+=digit;
        prod*=digit;
        n/=10;
    }
    result=sum*prod;
    return result;
}
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    cout<<sumOfDigitAndProd(num);
}