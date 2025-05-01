// Write a C++ function that takes a person's age as an argument and 
// returns their life stage (infant, toddler, child, adolescent, adult, senior) using if-else statements.
#include<bits/stdc++.h>
using namespace std;
string humanStage(int age){
         if(age>=0 && age<=1){
            return "Infant";
         }else if(age>1 && age<=3){
            return "Toddler";
         }else if(age>3 && age<=12){
           return "child";
         }else if(age>12 && age<18){
            return "adolescent";
         }else if(age>17 && age<60){
            return "adult";
         }else{
            return "senior";
         }
}


int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age<0){
        cout<< "enter proper age;";
    }else{
    string stage=humanStage(age);
    cout<<"according to your age your in "<<stage<<" stage";
    }

}