/*
3. Swapping Two Numbers: Write a function that swaps the values of two numbers without using a third variable.
Input: 10 20
Output: Swapped: 20 10
*/
#include<iostream>
using namespace std;

void swapevalue(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swape n1 is : "<<a<<" and n2: "<<b<<endl;

}

int main(){
    int n1,n2;
    cout<<"Enter first number: "<<endl;
    cin>>n1;
    cout<<"Enter seond number: "<<endl;
    cin>>n2;
    cout<<"Before swape n1 is : "<<n1<<" and n2: "<<n2<<endl;
    swapevalue(n1,n2);
}