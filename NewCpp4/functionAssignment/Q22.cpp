/*
22. Remove duplicate digits and return the sum of unique digits.
    Example: 122334 → unique: 1,2,3,4 → sum = 10
*/
#include<iostream>
using namespace std;
bool isDuplicate(string str,char ch){
    for(int i=0; i<str.size(); i++){
        if(str[i]==ch)return false;
    }
    return true;
}
int removeDuplicateAndsum(int n){
    string str=to_string(n),str2="";
    int sum=0;
    for(int i=0;i<str.size();i++){
        if(isDuplicate(str2,str[i])){
            str2+=str[i];
            sum+=str[i]-'0';
        }
    }
    return sum;
}
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    cout<<removeDuplicateAndsum(n);
}