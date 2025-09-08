/*
28. Remove all digits less than 5, and return the number formed.
    Example: 123456 → keep only 5 and 6 → result = 56
*/
#include<iostream>
using namespace std;
  int  removeDigitLessThanFive(int num){
    string str2="";
    int result;
    while(num){
        int digit=num%10;
        if(digit>=5)str2=to_string(digit)+str2;
        num/=10;
    }
    result=stoi(str2);
    return result;
  }
int main(){
    int num=123456;
    cout<<removeDigitLessThanFive(num);
}