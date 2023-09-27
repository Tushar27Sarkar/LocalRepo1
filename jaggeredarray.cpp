#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int row;
    cin>>row;
    int **arr = new int*[row];
    int size[]={4,2,3,4};
    for (int i = 0; i < row; i++)
    {
        /* code */
        arr[i]= new int [size[i]];
    }
    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < size[i]; j++)
        {
            /* code */
            cin>>arr[i][j];
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < size[i]; j++)
        {
            /* code */
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for (int i = 0; i < row; i++)
    {
       
        delete[] arr[i];
    }
    delete [] arr;
    
    return 0;
}