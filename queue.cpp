#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> a;
    a.push("tush");
    a.push("tush2");
    a.push("tush3");
    a.push("tush4");

    // a.pop();
    cout<<a.front()<<" "<<endl;
    cout<<a.size()<<" "<<endl;

    return 0;
}