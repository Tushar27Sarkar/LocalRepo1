#include<iostream>
using namespace std;
int table(int a ){
    static int c=0;
    c=c+1;
    return a *c;


}

int main(){
    int a,n;

    cout<<"Which table do yo want"<<endl;
    cin>>a;

    cout<<"upto which"<<endl;
    cin>>n;

     cout<<" the table of "<<a<<endl;
    for (int i = 1; i < n+1 ; i++)
    {
        /* code */
       
        cout<<a<<" X "<<i <<" = "<<table(a)<<endl;
    }
    
    return 0;
}