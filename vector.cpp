#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> n;

    n.push_back(1);
    cout << n.capacity()<<endl;
    n.push_back(5);
    cout << n.capacity()<<endl;
    n.push_back(3);
    cout << n.capacity()<<endl;
    n.push_back(7);
    cout << n.capacity()<<endl;
    n.push_back(5);
    cout << n.capacity()<<endl;
    cout<<n.front()<<endl;
    cout<<n.back()<<endl;

    
    for(int i:n){
        cout<<i<<" ";
    }
    
    cout<<endl;
     n.pop_back();
    for(auto i:n){
       
        cout<<i<<" ";
    }
    string str="geeks";
    for(auto i:str){
        cout<<i<<" ";
    }
    str.pop_back();
    str.pop_back();
    str.pop_back();
    for(auto i:str){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
     cout << n.capacity()<<endl;
    n.clear();
     cout << n.capacity()<<endl;
 cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

     vector<int> a(5,1);
     for(auto i:a){
        cout<<i<<" ";
    }

    
    return 0;
}