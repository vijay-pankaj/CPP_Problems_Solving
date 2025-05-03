//  Write a C++ function that takes an integer as input 
// and uses nested if-else statements to determine if the number is a power of 2 or not.
#include<bits/stdc++.h>
using namespace std;
bool ispowerofTwo(int n){
    if(n<0){
        return false;
    }else{
        if(n>0){
            while(n>1){
                if(n%2==0){
                    n=n/2;
                }else{
                    return false;
                }
            }
            return true;
        }
    }
}

int main(){
    int n;
     cout<<"entr number: ";
     cin>>n;
     if(ispowerofTwo(n)){
        cout<<"given number is power of two;";
     }else{
        cout<<"given number is not power of two;";
     }
}