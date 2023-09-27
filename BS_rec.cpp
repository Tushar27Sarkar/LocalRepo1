#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool BS(int arr[],int k,int s,int e){
    if(s>e) return false;
    int mid = s+(e-s)/2;
    if(arr[mid]==k) return true;

    else if(arr[mid]>k) return BS(arr,k,s,mid-1);
    else  return BS(arr,k,mid+1,e);
   
    
}
int main(){
    int arr[9]={12,23,45,56,78,89,97,99,101};
    int k;
    cin>>k;
    int s=0;
    int e=8;
    
    int ans=BS(arr,k,s,e);
    if(ans){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
    return 0;
}