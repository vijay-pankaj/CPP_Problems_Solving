/*
6. Reverse a Number :
-> Task: Write a recursive function to reverse a number.
*/
#include<iostream>
using namespace std;

int DigitCount(int num){
    static int rev=0;
    if(num==0){
        return rev;
    }
    rev=rev*10+num%10;
    return DigitCount(num/10);

}

int main(){
    int num;
    cout<<"enter number: ";
    cin>>num;
   cout<< DigitCount(num);
}