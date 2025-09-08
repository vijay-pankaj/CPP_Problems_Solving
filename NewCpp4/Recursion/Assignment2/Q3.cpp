/*
3. Find the Nth Fibonacci Number :
-> Task: Write a recursive function to compute the nth Fibonacci number.
*/
#include<iostream>
using namespace std;
int nthfibo(int n){
    if(n==0||n==1)return n;
    return nthfibo((n-1))+nthfibo(n-2);
}
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    cout<<"nth fibonacci number is: "<<nthfibo(n);
}