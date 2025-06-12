/*
5. Leap Year :

Input: 2024
Output: Leap Year

Input: 1900
Output: Not a Leap Year
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int year;
    cout<<"Enter number: ";
    cin>>year;
    if(year%400==0){
        cout<<"leap year";
    }else if(year%100==0){
        cout<<"Not leap year";
    }else if(year%4==0){
        cout<<"leap year";
    }
}