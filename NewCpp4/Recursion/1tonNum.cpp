#include<iostream>
using namespace std;

void printNum(int n){
    if(n==0){
        return;
    }
// cout<<n<<" ";
return printNum(n-1);
// cout<<endl;
cout<<n<<" ";
}

 int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    printNum(n);
 }