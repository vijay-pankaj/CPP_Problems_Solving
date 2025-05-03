// Develop a C++ function that takes an integer as an argument and returns whether it is a perfect square using logical operators
#include<bits/stdc++.h>
using namespace std;
bool isPerfectSqrt(int n){
    for(int i=1; i<=n; i++){
        if(i*i==n){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;

    if(n<0){
        cout<<"enter a positive number: ";
    }else{
        if(isPerfectSqrt(n)==1){
            cout<<"given number is perfect squareroot ";
        }
        else{
            cout<<"given number is not perfect sqrt ";
        }
    }
}