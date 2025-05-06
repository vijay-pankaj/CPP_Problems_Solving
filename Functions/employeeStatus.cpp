// 57. Implement a C++ function that takes a person’s employment status and years of experience as input and uses nested if-else statements to
//  determine if they are a fresher, experienced, or veteran employee.
#include<bits/stdc++.h>
using namespace std;

string employeeStatus(string employmentStatus,int exp){
if(employmentStatus=="employeed"){
    if(exp<2){
        return "fresher employee";
    }else if(exp<5){
        return "experienced employee";
    }else{
        return "veteran employee";
    }
}else if(employmentStatus == "unemployed"){
    return "Unemployed";
}else{
    return "Invalid employment status entered";
}
}

int main(){
    string status;
    int exp;
    cout<<"Enter employment status: ";
    cin>>status;

    cout<<"enter experince: ";
    cin>>exp;

    cout<<"According to given data "<<employeeStatus(status,exp);
}