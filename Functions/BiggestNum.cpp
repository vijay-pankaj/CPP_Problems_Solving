#include<bits/stdc++.h>
using namespace std;
void BiggestNum(int num1,int num2,int num3){
    if(num1>num2){
        if(num1>num3){
            cout<<"num1 is biggest";
        }else{
            cout<<"num3 is biggest";
        }
    }else{
        if(num2>num3){
            cout<<"num2 is biggest";
        }else{
            cout<<"num3 is biggest";
        }
    }
}
int main(){
    BiggestNum( 10,15,1);
}