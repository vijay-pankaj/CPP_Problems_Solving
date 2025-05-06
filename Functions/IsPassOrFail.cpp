// Write a C++ function that takes the marks of a student in three subjects as input and uses nested if-else statements to determine
//  if the student passed all subjects, passed any one subject, or failed
#include<bits/stdc++.h>
using namespace std;
string isPassOrFail(int m1,int m2,int m3){
    if(m1>0 && m1<=100 && m2>0 && m2<=100 && m3>0 && m3<=100){
    if(m1>=50 && m2>=50&& m3>=50){
        return "student passed all subjects";
    }else if(m1>50||m2>50||m3>50){
        return " passed any one/two subject";
    }else{
        return "failed";
    }
}else{
    return "enter valid marks under 1-100";
}
}

int main(){
    int m1,m2,m3;
    cout<<"Enter first subjec marks: ";
    cin>>m1;

    cout<<"Enter second subjec marks: ";
    cin>>m2;

    cout<<"Enter third subjec marks: ";
    cin>>m3;

    cout<<"According to given subject marks "<<isPassOrFail(m1,m2,m3);
}