#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cout<<"Enter character: ";
    cin>>ch;
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
                cout<<"Vowel";
            }else{
                cout<<"Consonent";
            }
    }else{
        cout<<"Enter a valid char";
    }
}