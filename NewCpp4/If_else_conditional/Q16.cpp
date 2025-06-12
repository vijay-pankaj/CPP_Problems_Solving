/*
16. Multiple of 3 and 7 :

Input: 21
Output: Yes

Input: 14
Output: No

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    //first
    // if(n%3==0&&n%7==0)cout<<"yes";
    // else cout<<"No";

    //second
    string isMul=(n%3==0&&n%7==0)?"yes":"No";
    cout<<isMul;
}
