/*
2. Sum of N Natural Numbers :
-> Task: Write a recursive function to compute the sum of the first n natural numbers.
*/
#include<iostream>
using namespace std;

int sumOfNum(int n){
    if(n==0)return 0;
   return n+sumOfNum(n-1);
}
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    cout<<sumOfNum(n);
}