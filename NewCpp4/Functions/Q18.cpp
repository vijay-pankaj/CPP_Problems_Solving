/*
3. Fibonacci Sequence: Write a function to print the first N numbers of the Fibonacci sequence.
Input: 5
Output: 0 1 1 2 3 5
*/
#include<bits/stdc++.h>
using namespace std;

void fibonaaci(int n){
    int a=0,b=1,next;
    cout<<a<<" ";
    cout<<b<<" ";
    for(int i=2; i<=n; i++){
        next=a+b;
        cout<<next<<" ";
        a=b;
        b=next;

    }

}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
     fibonaaci(n);
}