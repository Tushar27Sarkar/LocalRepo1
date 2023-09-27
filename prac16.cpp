#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"fibonacci term ? "<<endl;
     int prev =1;
     int  curr = 1;
     int next =1;
     cin>> n;

    for (int i = 1; i < n; i++)
    {
        /* code */
       next = prev + curr;
       prev = curr;
       curr=next;
       

       

        
    }
    cout<<next;
    
    return 0;
}