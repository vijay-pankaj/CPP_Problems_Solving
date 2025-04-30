/*Create a C++ function that takes a character as an argument and returns
 whether it is an uppercase letter or not using if-else statements.*/
#include<bits/stdc++.h>
using namespace std;
string UppercaseOrNot(char ch){
    if(ch>='A'&&ch<='Z'){
        return "upperCase letter";
    }
    return "not-Upper case or invalid";
}

int main(){
    char ch;
    cout<<"enter a character: ";
    cin>>ch;

    string ans=UppercaseOrNot(ch);
    cout<<ans;

}