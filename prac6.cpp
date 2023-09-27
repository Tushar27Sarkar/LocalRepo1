#include<iostream>
using namespace std;

int main(){
    int a=3;;
    int* b = &a;//{int* b =pointer variable}
    int** c=&b;
    cout<<&a<<endl;//address of a
    cout<<b<<endl;//address of a
    cout<<*b<<endl;//value of a
    cout<<&b<<endl;//address of b
    cout<<&c<<endl;//address  of c
    cout<<*c<<endl;//address of a
    cout<<**c<<endl;//value of a
    
     

    return 0;
}