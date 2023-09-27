#include<iostream>
using namespace std;
class Employee{
    private :
    int a,b,c;
    public:
    int d,e;
    void setData(int a,int b,int c);
    void getData();

};
void Employee ::setData(int a1, int b1  ,int c1){
    // int a1,b1,c1;
    a= a1;
    b= b1;
    c= c1;

}
void Employee ::getData(){
    {
        cout<<"the of a is "<<a<<endl;
        cout<<"the of b is "<<b<<endl;
        cout<<"the of c is "<<c<<endl;
        cout<<"the of d is "<<d<<endl;
        cout<<"the of e is "<<e<<endl;
    }
}

int main(){
    Employee tushar;
    int x,y,z;
    cin>>x,
    cin>>y;
    cin>>z;
    tushar.setData(x,y,z);
    tushar.d = 34;
    tushar.e= 54;
    tushar.getData();

    return 0;
}