// Create a C++ function that takes a temperature in Celsius as an argument and
//  returns the corresponding category (Cold, Warm, Hot) using if-else statements.
// User-defined, void-type function with parameter.
/*
#include<bits/stdc++.h>
using namespace std;
 void whetherCheck(int temp){
    if(temp>0 &&temp<10){
        cout<<"cold whether";
    }else if(temp>10 && temp<30){
        cout<<"whether is warm";
    }
    else if(temp>30){
        cout<<"whethe is hot";
    }
    else{
        cout<<"enter a positive ";
    }
 }
 int main(){
    // whetherCheck(7);
    // whetherCheck(24);
    whetherCheck(-1);
 }*/

 #include<bits/stdc++.h>
 using namespace std;
 string checkWhether(int temp){
    if(0<temp&&temp<10){
        return "cold whether";
    }else if(temp>10&&temp<30){
        return "warm whther";
    }else if(temp>30){
        return "Hot whther";
    }else{
        return "too much cold wheter";
    }
}
int main(){
    int temp;

    cout<<"enter the temprature: ";
    cin>>temp;
    string whether=checkWhether(temp);
    cout<< whether;

}