/*
2. Find the Remainder of Division: Write a function that returns the remainder when one number is divided by another.
Input: 10 3
Output: Remainder: 1
*/
#include<iostream>
using namespace std;

int reminderOfNUm(int num,int div){
    return num%div;
}

int main(){
    int num,divisor;
    cout<<"Enter number: ";
    cin>>num;
    cout<<"Enter divisor: ";
    cin>>divisor;
    cout<<reminderOfNUm(num,divisor);

}