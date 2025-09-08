/*
24. Return the sum of digits multiplied by total number of digits.
    Example: 123 → (1+2+3) × 3 = 6×3 = 18
*/

#include<iostream>
using namespace std;

int summultiplybyTotalDigit(int n){
    int sum=0,result,count=0;
    while(n){
        int digit=n%10;
        sum+=digit;
        count++;
        n/=10;
    }
    result=sum*count;
    return result;
}
int main(){
int num=123;
cout<<summultiplybyTotalDigit(num);
}