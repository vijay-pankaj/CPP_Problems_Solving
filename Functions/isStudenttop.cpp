// Create a C++ function that takes a student's score as an argument and returns
//  whether the score is in the top 10% using logical operators.
#include<bits/stdc++.h>
using namespace std;
bool isStudentTop(int marks){
    if(marks>=90&&marks<100){
        return true;
    }
    return false;
}
int main(){
    int m;
    cout<<"enter marks: ";
    cin>>m;
    if(m<0)cout<<"enter valid marks must in positive";
    else{
    if(isStudentTop(m)){
        cout<<"congrats you are in top 10 ";
    }else{
     cout<<"sorry you need to work hard ";
    }
}
}