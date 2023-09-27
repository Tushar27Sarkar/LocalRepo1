#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fun(int a[] ){
    cout<<a[0]<<" ";
}

void update( int **a){
    // a=a+1;

    // *a=*a+1;

    **a=**a+1;
}
int main(){
    // int a[5]={1,2,3,4};
    // fun(a+1);
    // cout<<a[0];
    // int b=5;
    // int *p1 =&b;
    // int **p2 =&p1;
    // cout<<a<<endl;
    // cout<<ptr<<endl;
    // cout<<&ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl; 
    // cout<<**p<<endl;
    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(p)<<endl;

    // cout<<b<<endl;
    // cout<<p1<<endl;
    // cout<<p2<<endl;

    // cout<<endl;
    // cout<<endl;
    
    // update(p2);
    // cout<<b<<endl;
    // cout<<p1<<endl;
    // cout<<p2<<endl;

    int a=11;
    int *ptr =&a;
    a++;
    cout<< *ptr <<endl;
    return 0;
}
