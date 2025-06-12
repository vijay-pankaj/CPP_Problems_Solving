/*
7. Eligible to Vote :

Input: 17
Output: Not Eligible

Input: 19
Output: Eligible
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"Enter number: ";
    cin>>age;

    // first
    // if(age>=18)cout<<"Eligible";
    // else cout<<"Not Eligible";

    // second
    // if(age>=18)cout<<"Eligible";
    // if(age<18)cout<<"Not Eligible";

    //Third
    string isEligible = (age>=18)?"Eligible":"Not Eligible";
    cout<<isEligible;
}