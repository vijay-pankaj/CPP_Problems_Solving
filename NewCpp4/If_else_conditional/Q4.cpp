/*
4. Divisible by 5 and 11 :

Input: 55
Output: Yes

Input: 20
Output: No
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    //first
    // if(n%5==0&&n%11==0){
    //     cout<<"devisible by 5 and 11";
    // }else{
    //     cout<<"Not divisible by 5 1nd 11";
    // }

    //second
    // if(n%5==0){
    //     if(n%11==0){
    //         cout<<"divisible by 5 and 11";
    //     }else{
    //         cout<<"divisible by 5 not 11";
    //     }
    // }

    //third
    string msg=(n%5==0&&n%11==0)?"divisible by 11 and 5":"Not divisible by both";
    cout<<msg;
}