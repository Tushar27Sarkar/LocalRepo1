#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int s,int e){
    
    int pivot=arr[s];
    int i=s;
    int j=e;
    
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(pivot>=arr[i]){
            count++;
        }
    }
    int pivotIndex = s+count;
    swap(arr[s],arr[pivotIndex]);

    while(i<count && j>count) {
        if(arr[i]>pivot && arr[j]<pivot){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[i]<=pivot){
            i++;
        }
        else{
            j--;
        }
    } 
    return pivotIndex ;  
}
void quickSort(int arr[],int s,int e){
    if(s>=e) return ;
    
    int p=partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
int main(){
    int arr[8]={23,56,12,45,89,62,78,25};
    int s=0;
    int e=7;
    quickSort(arr,s,e);
    for(int i=0;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}