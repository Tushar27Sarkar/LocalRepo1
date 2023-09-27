#include<iostream>
#include<queue>

using namespace std;

int main(){
    

    //max heap

    priority_queue<int> maxi;
    
    maxi.push(45);
    maxi.push(48885);
    maxi.push(4565);
    maxi.push(4235);
    maxi.push(4885);

    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;


    // min-heap

    priority_queue<int,vector<int>,greater<int> >mini;


    mini.push(45);
    mini.push(451);
    mini.push(452);
    mini.push(453);
    mini.push(455);
    mini.push(4555);

    int m=mini.size();
    for (int i = 0; i < m; i++)
    {
        /* code */
        cout<<mini.top()<<" ";
        mini.pop();
    }
    

    return 0;
}