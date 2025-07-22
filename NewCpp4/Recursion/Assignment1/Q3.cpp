/*
3. Print Numbers from 1 to N :
-> Task: Write a recursive function to print numbers from 1 to n.
*/
#include<iostream>
using namespace std;

void printNum(int n){
    if(n==0)return;
     printNum(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    printNum(n);
}