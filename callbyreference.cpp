#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int& func(int &n){
    int num=n;
    int &ans=num;
    ans++;
    return ans;
}

int sum(int arr[],int n){
    int m=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        m=m+arr[i];
    }
   return m; 
}

int main(){
    // int n=5;
    // cout<<func(n);

    // new char;
    int n;
    cin>>n;
    int * arr = new int[n];

    for(int i=0;i<n;i++){
        cin >> *(arr + i) ;
    }
    // ch='a';
    cout<< *(arr+1)<<endl;
    int res =sum(arr,n);
    cout<<res;
    return 0;
}