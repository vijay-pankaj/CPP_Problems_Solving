/*
19. Replace each digit with (digit + 1) % 10, and return the new number.
    Example: 789 → 890
*/
#include<iostream>
using namespace std;

int replaceAddOne(int n){
    string str=to_string(n),str2="";
    for(int i=0; i<str.size(); i++){
        int digit=str[i]-'0';
        int newdigit=(digit+1)%10;
        str2+=newdigit+'0';
    }
    int res=stoi(str2);
    return res;
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    cout<<replaceAddOne(num);
}