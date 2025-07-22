/*
4. Sum of Digits of a Number :
-> Task: Write a recursive function to find the sum of digits of a given number.
*/
#include<iostream>
using namespace std;

int DigitCount(int num){
    static int sum=0;
    if(num==0){
        return sum;
    }
     sum+=num%10;
    return DigitCount(num/10);

}

int main(){
    int num;
    cout<<"enter number: ";
    cin>>num;
   cout<< DigitCount(num);
}