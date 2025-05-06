// Write a C++ function that takes an integer as input and uses nested if-else statements to determine 
// if the number is a strong number (sum of factorials of digits equals the number) or not.
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int fact=1;
    while(n>0){
        fact*=n;
        n--;
    }
    return fact;
}
bool isStrongNum(int n){
    int temp=n;
    int sum=0;
    while(temp>0){
        int rem =0;
        rem = temp%10;
        sum +=fact(rem);
        temp=temp/10;
    }
    
    return sum==n;

}

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    if(isStrongNum(n)){
        cout<<" Given number is a Strong number ";
    }else{
        cout<<" Given number is Not Strong number";
    }
    return 0;

}