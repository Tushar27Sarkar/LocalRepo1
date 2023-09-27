#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int **arr = new int*[n];
    

    for(int i=0;i<n;i++){
        arr[i] = new int [m];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
        
    }
    for(int i=0;i<n;i++){
        delete[] arr[i]; //delete the row of array dynamically allocated in heap memory.
    }
    delete [] arr;//deleting whole matrix from dynamic allocation using pointer to first element and deleting it
    
    return 0;
}