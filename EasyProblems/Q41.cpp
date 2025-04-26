// Calculate the difference between two numbers and print the result. If the result is negative, convert it to positive using math
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter the num1: ";
    cin>>num1;

    cout<<"enter the num2: ";
    cin>>num2;

    int difference;
    difference=num1-num2;
    if(difference>0){
        cout<<difference;
    }else{
        cout<<-(difference);
    }
}