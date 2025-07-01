/*
6. Check Even or Odd Using Ternary Operator: Write a function that checks if a number is even or odd using a ternary operator.
Input: 7
Output: Odd
*/
#include<iostream>
using namespace std;

string isOddorEve(int n){
    string res=(n%2==0)? "Even":"Odd";
    return res;
}

int main(){
    int num;
    cout<<"enter number: ";
    cin>>num;
    cout<<isOddorEve(num);

}