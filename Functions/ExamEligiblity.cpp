// Implement a C++ function that takes a student's attendance percentage as an argument and
//  returns whether they are eligible for exams using if-else statements.
#include<bits/stdc++.h>
using namespace std;

string isEligible(int n){
    if(n>=70&&n<=100){
        return "you are eligible for exame";
    }
    return "you are not eligible for exam because of sort attendence ";

}

int main(){
    int n;
    cout<<"Enter attendance percentage: ";
    cin>>n;
    if(n<0 || n>100){
        cout<<"enter valid percentage  ";
    }else{
        string confirmation=isEligible(n);
        cout<<confirmation;
    }
}