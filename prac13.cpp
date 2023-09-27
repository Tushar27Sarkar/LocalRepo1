#include<iostream>
using namespace std;
int size =10;
int arr[10];
 void input(){
    cout<<" Enter your numbers"<<endl;
    for (int i = 0; i < 10; i++)
    {
        /* code */
        cin>>arr[i];
    }
    
 }
 void output(){
     cout<<" elements are "<<endl;
    for (int i = 0; i < 10; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
        // cout<<endl;
       

    }
    
 }


int main(){
    input();
    output();
    
    return 0;
}