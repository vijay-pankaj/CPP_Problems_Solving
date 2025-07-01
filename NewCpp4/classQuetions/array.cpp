// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//      int arr[]={-10,-20,-90,-40,-5};
//     int n=sizeof(arr)/sizeof(arr[0])-1;
//     int max=arr[0];
//     for(int i=0; i<=n; i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<max;
// }
// #include <iostream>
// #include <climits> // Required for INT_MIN

// int main() {
//     std::cout << "The minimum value of an int is: " << INT_MAX << std::endl;
//     return 0;
// }
// #include <iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int arr[] = {4,2,7,9,6};
//     int max = INT_MIN;
//     for (int i = 0; i <= 4; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//     }
//     cout<<"max: "<<max<<endl;

//     int secMax=INT_MIN;
//     for(int i=0; i<=4; i++){
//         if((arr[i]>secMax) && (arr[i]!=max)){
//             secMax=arr[i];
//         }
//     }
//     cout<<"Second max: "<<secMax;
// }

#include<iostream>
#include<climits>
using namespace std;

int maxinSquar(int arr[]){
     int max=INT_MIN;
   for(int i=0; i<=4; i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
    for(int i=0; i<=4; i++) {
        if(arr[i]*arr[i]>max && arr[i]!=max){
            return -1;
        }
    } 
    return max;  
   
}

int main(){
   int arr[]={5 ,2,4,25,3};
   cout<<maxinSquar(arr);
  
}