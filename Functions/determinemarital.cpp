// 58. Write a C++ function that takes a person’s marital status and age as input and uses nested if-else statements to determine 
// if they are single, married, or divorced and if they are young or old.
#include<bits/stdc++.h>
using namespace std;

string personStatus(string maritalStatus,int age){
    if(maritalStatus=="single"){
        if(age<40){
            return "single and young";
        }else{
            return "single but old";
        }
    }else if(maritalStatus=="married"){
        if(age<40){
            return "married and young";
        }else{
            return "married and old";
        }
    }else if(maritalStatus=="divorces"){
        if(age<40){
            return "divorces and young";
        }else{
            return "divorces and old";
        }
    }
}
int main(){
    int age;
    cout<<"Enter age: ";
    cin>>age;
    if(age<18){
        cout<<"you are minor";
    }else{
        string maritalstatus;
        cout<<"Enter your married status: ";
        cin>>maritalstatus;
        cout<<"The person is "<<personStatus(maritalstatus,age);
    }
}
