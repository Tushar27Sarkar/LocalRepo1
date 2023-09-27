#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int *arr,int n){
    if(n==0) return ;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]) 
        swap(arr[i],arr[i+1]);
    }
    
    
    bubbleSort(arr,n-1);
}




void SelectionSort(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    if(n==0) return ;
    int mini=0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[mini]){
            mini = i;
        }
    }
    swap(arr[0],arr[mini]);

    SelectionSort(arr+1,n-1);
}

void insertionSort(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    if(n<=1) return ;

    insertionSort(arr,n-1);

    int last = arr[n-1];
    int j=n-2;
    cout<<"value of j : "<<j<<endl;
    cout<<"value of n-1 : "<<n-1<<endl;
    while (j>=0 && arr[j]>last)
    {
        /* code */
        arr[j+1]=arr[j--];
    }
    
    arr[j+1]=last;
    

    
}

int main(){
    int arr[8]={23,56,12,45,89,62,78,25};
    // bubbleSort(arr,8);
    // SelectionSort(arr,8);
    insertionSort(arr,8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}