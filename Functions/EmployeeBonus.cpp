// Write a C++ function that takes an employee's years of service 
// as an argument and returns their bonus percentage using if-else statements.
#include<bits/stdc++.h>
using namespace std;
int employeeBonus(int yearOfService){
    int bonus;
    if(yearOfService>=10){
        bonus=15;
    }
    else if(yearOfService>=5){
        bonus=10;
    }else if(yearOfService>2){
        bonus=5;
    }else{
        bonus = 2;
    }
    return bonus;
}
int main(){
    int y;
    cout<<"enter employee's years of service: ";
    cin>>y;

    int bonus=employeeBonus(y);
    cout<<"given employee will get "<<bonus<<"% bonus";
}