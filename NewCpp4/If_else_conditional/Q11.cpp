/*
11. Even or Divisible by 3 :

Input: 6
Output: Yes

Input: 7
Output: No
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    //first
    // if(n%2==0){
    //     if(n%3==0){
    //         cout<<"yes";
    //     }
    // }else cout<<"No";

    //second
    string checkNum=(n%2==0&&n%3==0)?"yes":"No";
    cout<<checkNum;
}