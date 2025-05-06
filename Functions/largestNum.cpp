// Write a C++ function that takes two numbers as arguments and returns whether they are equal, or 
// which one is larger using if-else statements and relational operators.
#include<bits/stdc++.h>
using namespace std;
int largestNum(int n1,int n2){
    if(n1>n2){
        return n1;
    }
    return n2;

}
int main(){
    int n1,n2;

    cout<<"enter two number: ";
    cin>>n1>>n2;
    int BiggestNum=largestNum(n1,n2);
    cout<<"larger nmber is: "<<BiggestNum;
}