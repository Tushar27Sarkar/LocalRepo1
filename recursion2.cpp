#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int n){
    if(n==1||n==0){
        return true;
    }
    else if (arr[0]>arr[1]){
        return false;
    }
    else return(isSorted(arr+1,n-1));
}
int main(){
    int arr[6]={1,2,5,6,7,8};
    bool ans =isSorted(arr,7);
    cout<<ans<<endl;
    return 0;
}