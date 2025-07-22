/*
8. Print Numbers from N to 1 :
-> Task: Write a recursive function to print numbers from n down to 1.
*/
#include<iostream>
using namespace std;

void printNum(int n){
    if(n==0){
        return;
    }
cout<<n<<" ";
printNum(n-1);
}

 int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    printNum(n);
 }