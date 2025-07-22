/*
7. Check if a Number is Even or Odd :
-> Task: Write a recursive function to check whether a given number is even or odd.
*/
#include<iostream>
using namespace std;

bool isEvenOrOdd(int num){
    // return num%2==0;
    if(num==1)return false;
    else if(num==0) return true;
    else isEvenOrOdd(num-2);
}
int main(){
    int num;
    cout<<"enter number: ";
    cin>>num;
    if(isEvenOrOdd(num))cout<<"Yes,Given Number is Even";
    else cout<<"No,Given Number is odd";
}