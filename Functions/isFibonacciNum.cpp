// Write a C++ function that takes a number as an argument and returns whether it is a Fibonacci number or not using if-else statements
#include<bits/stdc++.h>
using namespace std;

bool sqrt(int n){
    for(int i=1;i<=n;i++){
        if(i*i==n){
            return true;
        }
    }
    return false;
}

bool isFibonacci(int n){
    int x1=5*n*n+4;
    int x2=5*n*n-4;
    if(sqrt(x1)||sqrt(x2)){
        return true;
    }
    return false;

}
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    // sqrt(n);
    if(n<0){
        cout<<"enter a positive number :";
    }else{
    if(isFibonacci(n)){
        cout<<"given nmber is a fibonacci number ";
    }else{
        cout<<"Given number is not a fionacci number ";
    }
    }
}