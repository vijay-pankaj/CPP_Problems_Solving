/*
30. Form a number by concatenating the cube of each digit.
    Example: 12 → 1³ = 1, 2³ = 8 → result = 18
*/
#include<iostream>
using namespace std;

int cancatenetofcubeDigit(int num){
   string str2="";
   while(num){
    int digit=num%10;
    int cubeOfDigit=digit*digit*digit;
    str2 = to_string(cubeOfDigit)+str2;
    num/=10;
   }
   return stoi(str2);
}
 
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    cout<<cancatenetofcubeDigit(num);
}