#include<iostream>
using namespace std;
float bank(int priciple,int year, float interest ){
    return priciple*year*interest;
}

int main(){
    int a,b,c;
    int money,yr;
    
    char m;

    cout<<"ENter your amount"<<endl;
    cin>>money;
    cout<<"For how year"<<endl;
    cin>>yr;
    cout<<"for vip type 'a' \nfor bank employee type 'b ' \nother type c"<<endl;
    cin>>m;

    if (m==a)
    {
        cout<<"your total amount = "<<bank(money,yr,1.16);
    }
    else if( m==b){
        cout<<"your total amount = "<<bank(money,yr,1.08);
    }
    else if (m==c) {
        cout<<"your total amount = "<<bank(money,yr,1.04);
    }
    return 0;
    
   
}