#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int s,int e){
    int mid =s+(e-s)/2;
    int len1= mid -s+1;
    int len2=e - mid;
    int * A1 = new int[len1];
    int * A2 = new int[len2];
    int inversion_count =0;

    int k=s;
    for(int i=0;i<len1;i++){
        A1[i]= arr[k++]; 
    }
     k=mid+1;
    for(int i=0;i<len2;i++){
        A2[i]= arr[k++]; 
    }
    int index1=0;
    int index2=0;
     k=s;
    while(index1<len1 && index2 < len2){
        if(A1[index1]<A2[index2]){
           arr[k++]= A1[index1++];
        }
        else{
            arr[k++]= A2[index2++];
            inversion_count++;
        }
    }
    while(index1<len1){
        arr[k++]= A1[index1++];
    }
    while(index2<len2){
        arr[k++]= A2[index2++];
    }
    delete []A1;
    delete []A2;
}
void mergeSort(int arr[],int s,int e){
    if(s>=e) return ;

    int mid = s+(e-s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}
int main(){
   int arr[8]={23,56,12,45,89,62,78,25};
   int s=0;
   int e=7;
   mergeSort(arr,s,e);
   for(int i=0;i<=e;i++){
    cout<<arr[i]<<" ";
   }
    return 0;
}