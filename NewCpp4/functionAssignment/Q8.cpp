/*8. Replace each digit with its 9’s complement (i.e., 9 − digit), and return the new number.
   Example: 2301 → 7698
*/
#include<iostream>
using namespace std;
int reverseNum(int n){
    int rev=0;
    while(n){
        int digit=n%10;
        rev=rev*10+digit;
        n/=10;
    }
    return rev;

}
int ninesComp(int n){
    int newNum=0;
    while(n){
        int digit=n%10;
        digit=9-digit;
        newNum=newNum*10+digit;
        n/=10;
    }
    int result=reverseNum(newNum);
    return result;

}
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    cout<<ninesComp(num);
}