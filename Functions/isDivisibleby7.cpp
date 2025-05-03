// Write a C++ function that takes an integer as input and uses nested if-else statements to determine 
// if the number is within a specific range (e.g., 1-100) and if it is divisible by 7
#include<bits/stdc++.h>
using namespace std;
string isDevisibleby7(int n){
    if(n>=1 && n<=100){
        if(n%7==0){
            return "Given number is divisible by 7 and in range 1-100";
        }else if((n>=1 && n<=100)){
            return "Not Devible by 7";
        }
    }else if(n>100 && n%7==0){
        return "number is divisible by 7 but out of range 1-100";

    }else if(n>100 && n%7!=0){
        return "given number is not divisible by 7 and out of range";
    }else{
        return "enter positive number";
    }
}
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    cout<<isDevisibleby7(n);
}