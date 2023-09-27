#include<iostream>
using namespace std;
void update(int ,int ){
    int *a,*b;
    int sum = *a+*b;
    int absDifference = *a -*b >0 ? *a-*b : -(*a - *b);
    *a= sum;
    *b=absDifference;
    cout<<*a<<endl;
    cout<<*b<<endl;
    }




int main(){
   int a,b;
   cin>>a>>b; 
   
   
 
   update(a,b);
   

    return 0;
}