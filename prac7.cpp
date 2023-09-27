#include<iostream>
using namespace std;

void swap(int* a ,int* b ){
  
 int x= *a;
  *a = *b;
  *b = x;  
}

void swap_reference_var(int &a ,int &b ){
  
 int x= a;
  a = b;
  b = x;
 
}
int &swap_reference_var1(int &a ,int &b ){
  
 int x= a;
  a = b;
  b = x;
  return b;
 
}

int main(){
 
  int s,t;
  cin>>s>>t;
  // cout<<"value  before swap "<<s<<" and "<<t<<endl;
  // swap(&s,&t);

  // cout<<"value  after swap " <<s<<" and "<<t<<endl;

  // cout<<"value  before swap "<<s<<" and "<<t<<endl;
  // swap_reference_var(s,t);

  // cout<<"value  after swap " <<s<<" and "<<t<<endl;

  cout<<"value  before swap "<<s<<" and "<<t<<endl;
  swap_reference_var1(s,t)=786;

  cout<<"value  after swap " <<s<<" and "<<t<<endl;
  
  return 0;
}