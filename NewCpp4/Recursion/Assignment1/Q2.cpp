/*
2. Power of a Number :
-> Task: Write a recursive function to calculate the power of a number (base^exponent).
*/
#include<iostream>
using namespace std;

int power(int x,int y){
     static int pow=x;
    if(y==1){
        return x;
    }
    x=x*pow;
    return power(x,y-1);

}

 int main(){
    int num;
    cout<<"enter num: ";
    cin>>num;

    int pow;
    cout<<"Enter Power: ";
    cin>>pow;

    cout<<power(num,pow);
 }