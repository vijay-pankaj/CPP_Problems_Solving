/*
4. Check Leap Year: Write a function that checks if a given year is a leap year or not.
Input: 2024
Output: Leap Year
*/

#include<bits/stdc++.h>
using namespace std;

bool isLeapYear(int year){
     if(year%400==0){
        // cout<<"leap year";
        return true;
    }else if(year%100==0){
        // cout<<"Not leap year";
        return false;
    }else if(year%4==0){
        // cout<<"leap year";
        return true;
    } else{
        return false;
    }
}

 int main(){
    int year;
    cout<<"Enter Year: ";
    cin>>year;
if(isLeapYear(year))cout<<"Leap Year";
else cout<<"Aleap year";
 }