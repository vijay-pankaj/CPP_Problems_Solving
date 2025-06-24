/*0
6. Find the Sign of a Number: Write a function that returns whether a number is positive, negative, or zero.
Input: -5
Output: Negative
*/
#include<bits/stdc++.h>
using namespace std;
string checkNum(int n){
    if(n!=0){
        if(n>0)return "Positive";
        else return "negative";
    }else{
        return "Zero";
    }
}
int main(){
    int num;
    cout<<"Entet number: ";
    cin>>num;
    cout<<checkNum(num);
}