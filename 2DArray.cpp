#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void isFound(int arr[][4],int target,int n,int m){
    int flag=0;
    int row1=0,column1=0;
    for(int row=0;row<3;row++){
        for(int column=0;column<4;column++){
            if(arr[row][column]==target){
                flag=1;
                row1=row;
                column1=column;
                break;
            }
            
        }
    }
    if(flag==1){
        cout<<"Element Found at "<< (m*row1)+column1+1<<endl;
    }
    else{
        cout<<"Element not Found"<<endl;
    }
}

void columnSum(int arr[][4],int n,int m){


for(int column=0;column<4;column++){
    int sum=0;
        for(int row=0;row<3;row++){
            sum+=arr[row][column];
        }
        cout<<sum<<" ";
    }

    
}

int largestRowSum(int arr[][4],int n ,int m){
    
    int largest=INT_MIN;
    
    int row1=0;
    int sum=0;
    for(int row=0;row<3;row++){
        sum=0;
        for(int column=0;column<4;column++){
            sum+=arr[row][column];
            
            
        }
        if(largest<sum){
            largest = sum ;
            row1=row;

        }
        
    }
    
cout<<"the maxmium sum is "<<sum<<endl;
return row1+1;   
}

int main(){
    int arr[3][4];
    for(int row=0;row<3;row++){
        for(int column=0;column<4;column++){
            cin>>arr[row][column];
        }
    }

    for(int row=0;row<3;row++){
        for(int column=0;column<4;column++){
            cout<<arr[row][column]<<" ";
        }
        cout<<endl;
    }

    int target;
    // cout<<"Enter your target ";
    // cin>>target;

    // isFound(arr,target,3,4);
    // columnSum(arr,3,4);
    int ans=largestRowSum(arr,3,4);
    cout<<"the highest sum row is "<<ans;
    return 0;
}