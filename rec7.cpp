#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int pow(int a,int b){
    if(b==1) return a;
    //odd b  me  a*pow(a,b/2)*power(a,b/2)   even b pow(a,b/2)*power(a,b/2)
    if(b&1) {
        return a*pow(a,b/2)*pow(a,b/2);
    }
    else{
        return pow(a,b/2)*pow(a,b/2);
    }
    
}
int main(){
    int a,b;
    cin>>a>>b;
    
    int ans=pow(a,b);
    cout<<ans;
    return 0;
}