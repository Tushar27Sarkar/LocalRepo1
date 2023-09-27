#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int t[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> t[i];
    }
    
    for (int j = n-1; j>=0; j--)
    {
        /* code */
        cout<<t[j]<<" ";
    }
    
    return 0;
}