/*4. Find the Sum of All Multiples of a Given Number :
-> Task: Write a recursive function to find the sum of all multiples of a given number up to n.
*/
#include<iostream>
using namespace std;
int sumOfMultiple(int n,int l){
    if(l==0)return 0;
    if(l%n==0){
       return l+sumOfMultiple(n,l-1);
    }else{
       return sumOfMultiple(n,l-1);
    }
}
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;

    int l;
    cout<<"Enter limit: ";
    cin>>l;
    cout<<sumOfMultiple(num,l);

}