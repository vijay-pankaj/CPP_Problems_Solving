/*
14. Multiply all digits at even positions, and subtract the sum of digits at odd positions.
    Example: 1234 → even = 2×4, odd = 1+3 → 8−4
*/
#include<iostream>
using namespace std;
int mulOfEvenAndSumOfOdd(int n){
    int multiOFEven=1,sumOfOdd=0;
    while(n){
        int digit=n%10;
        if(digit%2==0){
            multiOFEven*=digit;
        }else{
            sumOfOdd+=digit;
        }
        n/=10;
    }
    return multiOFEven-sumOfOdd;

}
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
   cout<<mulOfEvenAndSumOfOdd(n);
}