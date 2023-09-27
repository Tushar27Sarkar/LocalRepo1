#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void sayDigit(int n){
    if(n==0) return ;
    string str[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int i=n%10;
    n=n/10;
    sayDigit(n);
    
    cout<<str[i]<<" ";
    
    
}
int main(){
    int n;
    cin>>n;


    
    sayDigit(n);
    
    return 0;
}