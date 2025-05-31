// 5.Reverse a string Input: "hello" Output: "olleh"
#include<bits/stdc++.h>
using namespace std;
string reverseString(string str){
    int n=str.length();string str2=" ";
for(int i=0; i<=(n-1);i++){
    str2=str[i]+str2;
}
return str2;
}

int main(){
    string str;
    cout<<"enter string: ";
    cin>>str;
    cout<<reverseString(str);
}