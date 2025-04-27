// Take a sentence as input and print each word on a new line.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    cout<<"enter name: ";
    getline(cin,name);

    // stringstream ss(name);
    stringstream ss(name);
    string word;

    while (ss >> word) {
        cout << word << endl;
    }
}