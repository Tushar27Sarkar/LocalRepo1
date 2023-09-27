#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print (int n){
    

    if(n==0)
    return ;


    print(n-1);
    cout<<n<<" ";
    
}

int fibo(int x){
    if(x==1)
    return 0;
    if(x==2)
    return 1;


    return fibo(x-1)+fibo(x-2);
}
int main(){
    // int a=0,b=1,n=2;
    int x;
    cin>>x;
    
    int ans=fibo(x);
    cout<<ans;
    return 0;
}