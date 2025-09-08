/*
23. Return the total number of digits in the number.
    Example: 12345 → 5
*/
#include<iostream>
using namespace std;

int numberOfDigit(int n){
    int count=0;
    while(n){
        int digit=n%10;
        count++;
        n/=10;
    }
    return count;
}
int main(){
int num=12345;
cout<<numberOfDigit(num);
}