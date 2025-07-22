/*10. Find First Occurrence of a Character in a String
-> Problem Statement: Find the position of the first occurrence of a specific character in a char array (string).
Explanation:
-> Loop through the string and return the index of the first matching character. If not found, return -1.
Input:
-> char str[] = "hello";  
-> char ch = 'l';  
Output:
-> Position of 'l': 2
*/
#include<iostream>
using namespace std;

int findthePosFirstOcc(char str[], char ch,int n){
    for(int i=0; i<n; i++){
        if(str[i]==ch)return i;
    }
    return -1;
}
int main(){
    char str[]={'h','e','l','l','o'};
    char ch;
    int n=sizeof(str)/sizeof(str[0]);
    cout<<"Enter char: ";
    cin>>ch;
    cout<<findthePosFirstOcc(str,ch,n);
}