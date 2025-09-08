#include<iostream>
using namespace std;
void inputArr(int *arr,int n){
    cout<<"Enter array Elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
void printArr(int *arr,int n){
    cout<<"Given array is : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
void merge(int *arr,int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *left = new int[len1];
    int *right =new int[len2];

    int k=s;
    for(int i=0; i<len1;i++){
        left[i]=arr[k];
        k++;
    }
     k=mid+1;
    for(int i=0; i<len2; i++){
        right[i]=arr[k];
    }
    int mainIndex=s;
    int i=0,j=0;
    while(i<len1&&j<len2){
        if(left[i]<right[j]){
            arr[mainIndex]=left[i];
            i++;
        }
        else{
            arr[mainIndex]=right[j];
            j++;
        }
        mainIndex++;
    }
    while(i<len1){
        arr[mainIndex]=left[i];
        i++;
        mainIndex++;
    }
    while (j<len2)
    {
        arr[mainIndex]=right[j];
        j++;
        mainIndex++;
    }
    

}

void mergesort(int *arr,int s,int e){
    if(s>=e)return;

    int mid=s+(e-s)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}

int main(){
    int n;
    cout<<"Enter sizeOfArr: ";
    cin>>n;
    int *arr=new int[n];
    
    inputArr(arr,n);
    printArr(arr,n);
   mergesort(arr, 0, n-1);

    printArr(arr, n);
}

//mergesort
// #include <iostream>
// using namespace std;

// void input(int *arr, int n){
//     cout<<"Enter the Elements of Array : "<<endl;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     cout<<endl;
// }

// void print(int *arr, int n){
//     cout<<"Array is : ";
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl<<endl;
// }

// void merge(int *arr, int s, int e){
//     int mid=s+(e-s)/2;

//     int len1=mid-s+1;
//     int len2=e-mid;

//     int *left=new int[len1];
//     int *right=new int[len2];

//     // Left Part storing Data to Array
//     int k=s;
//     for(int i=0; i<len1; i++){
//         left[i]=arr[k];
//         k++;
//     }

//     // Right Part storing Data to Array
//     k=mid+1;
//     for(int i=0; i<len2; i++){
//         right[i]=arr[k];
//         k++;
//     }

//     int mainIndex=s;

//     int i=0;
//     int j=0;

//     while(i<len1 && j<len2){
//         if(left[i] < right[j]){
//             arr[mainIndex]=left[i];
//             i++;
//         }else{
//             arr[mainIndex]=right[j];
//             j++;
//         }
//         mainIndex++;
//     }

//     while(i<len1){
//         arr[mainIndex]=left[i];
//         i++;
//         mainIndex++;
//     }

//     while(j<len2){
//         arr[mainIndex]=right[j];
//         j++;
//         mainIndex++;
//     } 
    
// }

// void mergeSort(int *arr, int s, int e){
//     // Base Case
//     if(s>=e){
//         return;
//     }

//     // Rec Case

//     // mid
//     int mid=s+(e-s)/2;

//     // Left Part
//     mergeSort(arr, s, mid);

//     // Right Part
//     mergeSort(arr, mid+1, e);

//     merge(arr, s, e);
// }

// int main(){

//     int n;
//     cout<<"Enter the Size of Array : ";
//     cin>>n;

//     int *arr=new int[n];

//     input(arr, n);

//     print(arr, n);

//     mergeSort(arr, 0, n-1);

//     print(arr, n);

//     return 0;
// }