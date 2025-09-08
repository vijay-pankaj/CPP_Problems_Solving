/*
25. Return the reverse of the sum of digits.
    Example: 1234 → sum = 10 → reverse = 1
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

int revsumofDigit(int n){
    int sum=0,result;
    while(n){
        int digit=n%10;
        sum+=digit;
        n/=10;
    }
    result=reverseNum(sum);
    return result;
}
int main(){
int num=1234;
cout<<revsumofDigit(num);
}