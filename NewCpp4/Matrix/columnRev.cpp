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

void colmnWiseReverse(int **arr, int row, int col){
    for(int i=0; i<row; i++){
        int s=0; 
        int e=col-1;

        while(s<e){
            swap(arr[s][i], arr[e][i]);
            s++;
            e--;
        }
    }
}

int main(){
    int row;
    cout<<"Enter the value of Row : ";
    cin>>row;

    int col;
    cout<<"Enter the value of Col : ";
    cin>>col;

    int **arr=new int*[row];

    for(int i=0; i<row; i++){
        arr[i]=new int[col];
    }

    inputMatrix(arr, row, col);

    printMatrix(arr, row, col);
colmnWiseReverse(arr, row, col);

    printMatrix(arr, row, col);
}