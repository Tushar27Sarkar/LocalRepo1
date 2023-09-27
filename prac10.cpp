#include<iostream>
using namespace std;
float money(int principle, float factor =1.04){
    return principle*factor;
}

int main(){
    int x=100000;
    cout<<"your money "<<x<<" will become "<<money(x)<<endl;
    cout<<"your money "<<x<<" will become (only for vip) "<<money(x,1.4)<<endl;
    
    return 0;
}