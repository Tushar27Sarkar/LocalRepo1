#include<iostream>
#include<deque>
using namespace std;

int main(){


 deque<int> a;

 deque<int>l(a);//poora array l me ajaega a ka
 a.push_back(1);
 a.push_front(22);
 a.push_front(222);
 a.push_front(223);
 a.push_front(2244);


// cout<<a.capacity();
// a.pop_back();
// a.pop_front();
// cout<<endl;
// cout<<endl;
// cout<<endl;
// cout<<endl;
// for(int i:a){
//     cout<<i<<" ";
//  }

//  cout<<a.at(2);
// cout<<endl;
// cout<<endl;
// cout<<endl;
// cout<<endl;
 cout<<a.front()<<endl;
 cout<<a.back()<<endl;
 cout<<a.empty()<<endl;
  for(int i:a){
    cout<<i<<" ";
 }
//  a.erase(a.begin(),a.begin()+1);
 cout<<endl;
cout<<endl;
cout<<endl;
a.erase(a.begin()+1);
 for(int i:a){
    cout<<i<<" ";
 }
    return 0;
}