// #include<iostream>
// using namespace std;

// void inputMatrix(int **arr, int row, int col){
//     cout<<"Enter the Elements of Matrix : "<<endl;
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cin>>arr[i][j];
//         }
//     }
// }

// void printMatrix(int **arr, int row, int col){
//     cout<<"Matrix is  : "<<endl;
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl<<endl;
// }


// void zigzagMatrix(int **arr, int row, int col){
//     for(int j=0; j<col; j++){
//         if(j%2!=0){
//             for(int i=row; i>=0; i--){
//                 cout<<arr[i][j];
//             }
//         }
//         else{
//             for(int k=0; k<row; k++){
//                 cout<<arr[k][j];
//             }
//         }
//     }
// }

// int main(){
//     int row;
//     cout<<"Enter the value of Row : ";
//     cin>>row;

//     int col;
//     cout<<"Enter the value of Col : ";
//     cin>>col;

//     int **arr=new int*[row];

//     for(int i=0; i<row; i++){
//         arr[i]=new int[col];
//     }
    
//     inputMatrix(arr, row, col);

//     printMatrix(arr, row, col);

//     zigzagMatrix(arr,row,col);
// }

#include<iostream>
using namespace std;

int fun(int n){
if(n==1){
    return n;
}
return  n+fun(n-1);
}

int main(){
    cout<<fun(5);
}