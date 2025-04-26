// // Take 10 integer inputs from the user and print them.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int num;
//     // for(int i=1;i<=10; i++){
//     //     cout<<"Enter the number: ";
//     //     cin>>num;

//     //    cout<<"given number is: "<<num<<"\n";

//     // }


//     int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
//     cout<<"Enter 10 numbers: ";
//     cin>>n1>>n2>>n3>>n4>>n5>>n6>>n7>>n8>>n9>>n10;

//     cout<<"The number is n1:"<<n1<<"\n"
//     <<"The number  n2 is: "<<n2<<"\n"
//     <<"The number  n3 is: "<<n3<<"\n"
//     <<"The number  n4 is: "<<n4<<"\n"
//     <<"The number  n5 is: "<<n5<<"\n"
//     <<"The number  n6 is: "<<n6<<"\n"
//     <<"The number  n7 is: "<<n7<<"\n"
//     <<"The number  n8 is: "<<n8<<"\n"
//     <<"The number  n9 is: "<<n9<<"\n"
//     <<"The number  n10 is: "<<n10<<"\n";


// }


#include <iostream>
using namespace std;

int main() {
    int numbers[10];

    // Taking input
    cout << "Enter 10 integers:\n";
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    // Printing the input
    cout << "You entered:\n";
    for (int i = 0; i < 10; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}