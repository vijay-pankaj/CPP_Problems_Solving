/*Implement a C++ function that takes the number of hours a car is parked as an argument 
and returns the parking fee based on hourly rates using if-else statements.*/
#include<bits/stdc++.h>
using namespace std;
 int parkingFee(int hr){
    int pay =200;
    if(hr<=24){
        return pay;
    }else if(hr>24){
        // 20rs extra charge per hr
        return pay+(hr-24)*20;
    }
 }

 int main(){
    int hr;
    cout<<"enter hour of parked: ";
    cin>>hr;
    int totalAmount=parkingFee(hr);
    cout<<"your have to pay total amount is: "<<totalAmount;
 }