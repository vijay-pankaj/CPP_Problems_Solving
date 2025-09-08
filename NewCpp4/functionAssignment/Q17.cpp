/*
17. Reverse the number and subtract the original number from the reversed number.
    Example: 123 → 321 − 123 = 198
*/
#include<iostream>
using namespace std;
int reverseNum(int n){
    int rev=0;
    while(n){
        rev=rev*10+n%10;
        n/=10;
    }
    return rev;
}
int revAndSubtract(int n){
    int reverseOfNum=reverseNum(n);
    return reverseOfNum-n;

}
int main(){
    int num;
    cout<<"enter number: ";
    cin>>num;
    cout<<revAndSubtract(num);
}