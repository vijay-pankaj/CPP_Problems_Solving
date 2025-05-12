#include<bits/stdc++.h>
using namespace std;

void swapeString(string str1,string str2){
    string temp = str1;
    str1=str2;
    str2=temp;
    cout<<"\nAfter swape str1: "<<str1<<"\n"<<"After swape str2: "<<str2;
}
int main(){
    string str1,str2;
    cout<<"enter both string: ";
    getline(cin,str1);
    getline(cin,str2);

    cout<<"string 1 is : "<<str1<<"\n"<<"string 2 is: "<<str2<<"\n";

    swapeString(str1, str2);
}
