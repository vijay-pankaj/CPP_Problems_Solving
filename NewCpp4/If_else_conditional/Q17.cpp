/*
17. Digit Check :

Input: 5
Output: Digit

Input: %
Output: Not a Digit
*/
 #include<bits/stdc++.h>
using namespace std;
int main(){
    char n;
    cout<<"Enter number: ";
    cin>>n;

    //first
    // if(n>='0'&&n<='9')cout<<"digit";
    // else cout<<"Not digit";

    string isDigit=(n>='0'&&n<='9')?"digit":"Not digit";
    cout<<isDigit;
}