/*
20. Count how many digits are greater than 5.
    Example: 987654 → digits >5 = 9, 8, 7 → count = 3
*/

#include<iostream>
using namespace std;
  void  countDigitgreaterFive(int num){
    int count=0;
    cout<<"Digits greater than five: ";
    while(num){
        int digit=num%10;
        if(digit>5){
            cout<<digit<<" ";
            count++;
        }
        num/=10;
    }
    cout<< "count: "<<count;
  }
int main(){
    int num=987654;
    countDigitgreaterFive(num);
}