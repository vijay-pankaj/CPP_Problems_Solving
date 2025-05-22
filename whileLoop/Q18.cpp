// 18. Check if Number is Duck Number (contains zero but not at start) Input: 1023 → Output: Yes Input: 0123 → Output: No
#include<bits/stdc++.h>
using namespace std;

bool isDuckNum(int n){
    string str=to_string(n);
    if(str[0]=='0'){
        return false;
    }
    int i=1;
    while(str.length()>i){
         if (str[i] == '0') {
            return true;
        }
        i++;
    }

    return false;
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    if(isDuckNum(num)){
        cout<<"Yes, Given number is duck number"<<endl;
    }else{
        cout<<"No, Given number is not duck number"<<endl;

    }
}