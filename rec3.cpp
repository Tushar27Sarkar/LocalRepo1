#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sum(int *arr,int n){
    if(n==1) return arr[0];
    
    
     return arr[0]+sum(arr+1,n-1); // arr[n-1]+sum(arr,n-1);
}
int main(){
    int arr[6]={1,2,5,7,6,8};
    int ans=sum(arr,6);
    cout<<ans;
    return 0;
}