/*15. Rearrange digits of the number in ascending order. 
    Example: 3214 → 1234
*/
#include<iostream>
using namespace std;
int assending(int n){
    int count[10]={0};
    while(n){
        int digit=n%10;
        count[digit]++;
        n/=10;
    }
    int res=0;
    for(int i=0; i<10; i++){
        while(count[i]--){
            res=res*10+i;
        }
    }
    return res;

}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Assending order number: "<<assending(n);
}