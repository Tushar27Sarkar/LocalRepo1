#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rev(char name[], int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(name[s++],name[e--]);
        
    }
}

int length(char name[]){
    int count=0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        /* code */
        count++;
    }
    
    return count;
    
}


int main(){
    char a[20];
    cin>>a;
    int n=length(a);
    rev(a,n);
    cout<<a;
    return 0;
}