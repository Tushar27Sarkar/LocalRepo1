#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str= "Tushar";
    stack<char> st;
    string s="";
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        st.push(ch);
    }

    while(!st.empty()){
        char ch= st.top();
        s.push_back(ch);
        st.pop();
    }

    cout<< s<<endl;
    return 0;
}