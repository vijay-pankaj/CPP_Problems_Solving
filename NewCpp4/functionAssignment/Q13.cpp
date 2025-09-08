/*13. Raise each digit to the power of its position (1-based from left) and return the sum.
    Example: 123 → 1¹ + 2² + 3³
*/
#include<iostream>
using namespace std;
int powerOfNum(int num,int power){
    int pow=1;
    while(power){
        pow*=num;
        power--;
    }
    return pow;
}
int powerOfItsPos(int n){
    int origitnalValue=n,sum=0;
    int count=0;
    while(n){
        n/=10;
        count++;
    }
    while(origitnalValue){
        int digit=origitnalValue%10;
       sum+=powerOfNum(digit,count);
        count--;
        origitnalValue/=10;
    }
    return sum;


}
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    cout<<powerOfItsPos(n);
}