#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;

    s.insert(45);
    
    s.insert(45445);
    s.insert(4556);
    
    for(auto i: s){
        cout<<i<<" ";
    }
    return 0;
}