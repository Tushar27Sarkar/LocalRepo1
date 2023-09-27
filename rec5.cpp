#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int peak(int arr[],int s,int e,int ans){
        if(s>e) return ans;
        int mid=s+(e-s)/2;
        if(arr[mid]<arr[mid+1]) {
            ans=mid+1;
            peak(arr,mid+1,e,ans);
        }
        else{
           peak(arr,s,mid,ans); 
        } 

        return ans;
    }
int main(){
    int arr[4]={1,2,4,3};
    int s=0;
    int e=3;
    int ans=0;

    cout<<"hello";
    int res=peak(arr,0,3,0);
    cout<<"peak index is : "<<res<<endl;
    return 0;
}