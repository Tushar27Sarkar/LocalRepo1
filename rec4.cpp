#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool LS(int arr[],int n,int key){
    if(n==0) return false;
    else if(arr[0]==key) return true;
    else return LS(arr+1,n-1,key);
     
}
int main(){
    int arr[5]={3,5,1,2,6};
    int k;
    cin>>k;
    int ans=LS(arr,5,k);
    if(ans){
        cout<<"Found";

    }
    else{
        cout<<"Not Found";
    }
    return 0;
}