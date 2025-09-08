/*
16. Return the sum of digits divisible by 3.
    Example: 123456 → 3 and 6 → sum = 9
*/
#include<iostream>
using namespace std;
int sumOfDigitDivByThree(int n){
    int sum=0;
    while(n){
        int digit=n%10;
        if(digit%3==0){
            sum+=digit;
        }
        n/=10;
    }
    return sum;

}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<sumOfDigitDivByThree(n);
}