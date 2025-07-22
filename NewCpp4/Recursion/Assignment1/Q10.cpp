/*
10. Fibonacci Series :
-> Task: Write a recursive function to print the first n Fibonacci numbers.
*/
#include<iostream>
using namespace std;
int fibonacchi(int n){
    if(n==0||n==1){
        return n;
    }
     return fibonacchi(n-1)+fibonacchi(n-2);
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<fibonacchi(i)<<" ";
    }
}