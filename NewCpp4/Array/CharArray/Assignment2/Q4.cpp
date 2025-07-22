/*
4. Find the Largest Word in a String
-> Problem Statement: Find the largest word in a char array (string).
Explanation:
-> Split the string into words and compare their lengths to find the longest one.
Input:
-> char str[] = "this is a test string";  
Output:
-> Largest word: "string"
*/
#include<iostream>
#include<climits>
using namespace std;

string largeststr(string str,int n){
    string largstr="",str2="";
    for(int i=0; i<=n; i++){ 
        if(i<n&&str[i]!=' '){
            str2+=str[i];
        }else{
            if(str2.size()>largstr.size()){
                largstr=str2;
            }
             str2="";
        }
       
    }
   return largstr;

}

int main(){
    string str="this is a test string";
    int n=str.size();
    cout<<largeststr(str,n);
}