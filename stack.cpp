#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string>a;

    a.push("tushar");
    a.push("tushar1");
    a.push("tushar2");
    a.push("tushar3");
    a.push("tushar4");

    a.pop();

    a.size();
    a.empty();
    cout<<a.top();
    return 0;
}