#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(int &p){
    cout<< &p<<endl;
}
int main(){
    // int num=5;
    // int *ptr=&num;
    // // int *p=0;
    // // p=&num;
    // // cout<<ptr<<endl;
    // // cout<<*ptr<<endl;
    // // cout<<sizeof(num)<<endl;
    // // cout<<sizeof(ptr)<<endl;
    // // cout<<sizeof(*ptr)<<endl;
    // int a=*ptr;
    // a++;
    // cout<<ptr<<endl;
    // *ptr=*ptr*2;
    // // ptr++;
    // cout<<a<<endl;
    // cout<<*ptr<<endl;
 
    // cout<<num<<endl;

    // int *q = ptr;
    // cout<<q<<endl;
    // cout<<*q<<endl;
    // int **q = &ptr;
    // cout<<q<<endl;
    // cout<<*q<<endl;
    // cout<<**q<<endl;
    // cout<<ptr<<endl;

    // cout<<endl;
    // cout<<endl;
    // cout<<endl;

    // int ***r= &q;
    // cout<<***r<<endl;
    // cout<<**r<<endl;
    // cout<<*r<<endl;
    // cout<<r<<endl;

    // int arr[5]={0,2,3,4,5};
    // cout<<arr<<endl;
    // cout<<&arr<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<*arr<<endl;
    // cout<<endl;
    // cout<<endl;

    // int *p=&arr[0];
    // cout<< p <<endl; 
    // cout<< *p <<endl; 
    // cout<< &p <<endl; 

    // char *c="abcdef";
    // cout<<c<<endl;
    // cout<<*c<<endl;
    // cout<<&c<<endl;

    // char ch[6]="abcde";
    // char *ptr =&ch[0];
    // char **p= &ptr;
    // cout<<ch<<endl;
    // cout<<*ch<<endl;
    // cout<<&ch<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<&ptr<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<**p<<endl;
    // cout<<&p<<endl;

    int value =5;
    int *p=&value;
    cout<<&p<<endl;

    print(*p);
    return 0;
}