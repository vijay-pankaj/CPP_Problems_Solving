/*
2. Split the number into two parts, reverse each part, and return their sum.
   Example: 6524 → reverse(65) + reverse(24)
*/
#include<iostream>
using namespace std;
int reverseNum(string str){
    int n=stoi(str);
    int rev=0;
    while(n){
        int digit=n%10;
        rev=rev*10+digit;
        n/=10;
    }
    return rev;

}
int splittwoPartrevadd(int n){
    string str=to_string(n);
    int s=0,e=str.size();
    int mid=s+(e-s)/2;
    string first = str.substr(0, mid);
    string second = str.substr(mid);
    return reverseNum(first) + reverseNum(second);
}


int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
   cout<<splittwoPartrevadd(n);

}