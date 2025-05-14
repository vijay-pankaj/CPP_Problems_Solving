// 12. Write overloaded functions to print values of different types (int, float, char, and string) in a formatted way.
#include<bits/stdc++.h>
using namespace std;
void differentDtype(int n1,float n2 ,char ch, string str){
cout<<"integer "<<n1<<" float "<<n2<<" char "<<ch<<" string "<<str;
}
int main(){
int n1;
float n2;
char ch;
string str;
cout<<"enter variable valuew in a formate: ";
cin>>n1>>n2>>ch>>str;
differentDtype(n1,n2,ch,str);
}