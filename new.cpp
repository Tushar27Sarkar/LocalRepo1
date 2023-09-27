#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void primeNumber(int a){
     int flag=0;
    for(int i=2;i<a;i++){
        if(a%i==0){
           flag=1;
           break;
        }
        
    }
    if(flag==1){
        cout<<"not Prime Number";
    }
    else{
        cout<<" Prime Number";
    }
}
int main(){
    int a;
    cin>>a;
   primeNumber(a);

    return 0;
}