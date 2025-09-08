/*3. Split the number into three equal parts and return (part1 × part2) − (part3)². 
   Example: 123456 → (12 × 34) − 56²
*/
#include<iostream>
using namespace std;
int func(int n){
    string str= to_string(n);
    int e=str.size();
    //deviding length into three part
    int len=e/3;
    int num1=stoi(str.substr(0,len));
    int num2=stoi(str.substr(len,len));
    int num3=stoi(str.substr(2*len,len));
    int res=(num1*num2)-(num3*num3);
    return res;

}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<func(n);
}