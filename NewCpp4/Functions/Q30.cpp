/*
1. Sum of Two Numbers: Write a function that adds two numbers and returns the result.
Input: 5 7
Output: Sum: 12

*/
#include<iostream>
using namespace std;

int sumOfTwo(int a,int b){
    return a+b;
}

int main(){
    int a,b;
    cout<<"enter a and b: ";
    cin>>a>>b;
   cout<< sumOfTwo(a,b);

}