// Write a C++ function that takes a person's weight and height as arguments and returns their Body Mass Index (BMI) 
// category (Underweight, Normal weight, Overweight, Obese) using if-else statements.

// if your height is in foot then covert it in meter and enter;
#include<bits/stdc++.h>
using namespace std;
string bmiCheck(float height ,float weight,float bmi){
    bmi=weight/(height*height);
   string result =(bmi<18.5)?"You are Underweight":
   (bmi>=18.5&&bmi<24.9)?"You have Normal weight":
   (bmi>=25&&bmi<29.9)?"You are Overweight":
   "You are Obese.";
return result;
}
int main(){
    float height,weight,bmi;

    cout<<"enter your height and weight: ";
    cin>>weight>>height;

    if(height<=0 ||weight<=0){
        cout<<"enter valid height or weight";
    }
    string FinalReport= bmiCheck(height,weight,bmi);
    cout<<FinalReport;
    
}