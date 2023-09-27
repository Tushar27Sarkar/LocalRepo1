#include<iostream>
// #include<bits/stdc++.h>
#include<queue>
using namespace std;

struct stack
{
    queue<int> q;
    

   
void push(int data){
    int size = q.size();

    q.push(data);

    for(int i=0;i<size;i++){
        q.push(q.front());

        q.pop();
    }
}

void pop(){
    if(!q.empty()){
        q.pop();
    }
    else{
        cout<<"Stack is empty"<<endl;
    }
    
}

int top(){
    return (q.empty()) ? -1 : q.front();
}

int size(){
    return  q.size();    
}
};



int main(){
    stack st;
    st.push(5);
    st.push(56);
    st.push(54);
    st.push(55);
    st.push(58);

    cout<<st.top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;

    return 0;
}