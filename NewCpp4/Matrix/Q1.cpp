#include <iostream>
using namespace std;

void inputMatrix(int **arr, int row, int col){
    cout<<"Enter the Elements of Matrix : "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
}

void printMatrix(int **arr, int row, int col){
    cout<<"Matrix is  : "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}

int main(){
    int row;
    cout<<"Enter the value of Row : ";
    cin>>row;

    int col;
    cout<<"Enter the value of Col : ";
    cin>>col;

    int *arr=new int[row];

    for(int i=0; i<row; i++){
        arr[i]=new int[col];
    }

    inputMatrix(arr, row, col);

    printMatrix(arr, row, col);


    // int arr1[3][4]={
    //                 {11, 12, 13, 14},
    //                 {21, 22, 23, 24},
    //                 {31, 32, 33, 34}
    //             };

    // int arr2[3][4]={101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112};

    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         cout<<arr1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout<<endl<<endl;

    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         cout<<arr2[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    return 0;
}