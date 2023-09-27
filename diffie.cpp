#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int power(int m,int p1,int n){
    int n1=pow(m,p1);
    int n2=n1%n; 
    return n2;
}
int main(){
    int n,m;
    int p1,p2;
    cout<<"1st public key "<<endl;
    cin>>n ;
    cout<<"2nd public key"<<endl;
    cin>>m ;
    cout<<"private key of Alice"<<endl;
    cin>>p1 ;
    cout<<"private key of Bob"<<endl;
    cin>>p2 ;

    int X = power(m,p1,n);
    int Y = power(m,p2,n);

    int k1=power(X,Y,n);
    int k2=power(Y,X,n);
    cout<<"Bob transmitted "<<X<<endl;
    cout<<"Alice transmitted "<<Y<<endl;
    cout<<"Alice Generated "<<k1<<endl;
    cout<<"Bob Generated "<<k2<<endl;
    if(k1==k2){
        cout<<"Channel Secured!!!"<<endl;
    }
    else{
        cout<<"Error in channel security!"<<endl;
    }
    return 0;
}