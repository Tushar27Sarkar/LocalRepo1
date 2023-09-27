#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int GCD(int x,int y){
    if(x==0){
        return x;
    }
    if(y==0){
        return y;
    }
    while(x !=y){
        if (x > y){
            x=x-y;
        }
        else{
            y=y-x;
        }
    }
    return x;
}

int main(){
    int a,b;
    cin>>a>>b;
    int result=GCD(a,b);
    cout<<result;
    return 0;
}