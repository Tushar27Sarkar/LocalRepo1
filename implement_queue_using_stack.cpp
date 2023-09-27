#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Queue
{
    stack<int> s1;
    stack<int> s2;

    void push(int data){
        s1.push(data);
    }

    int pop(){
        if(!s2.empty()){
            s2.pop();
        }
        else{
            while(!s1.empty()){
                int val = s1.top();
                s1.pop();
                s2.push(val);
            }
            s2.pop();
        }
    }

    int front(){
        if(!s2.empty()){
            return s2.top();
        }
        else{
           while(!s1.empty()){
                int val = s1.top();
                s1.pop();
                s2.push(val);
            }
            return s2.top(); 
        }
    }

    

   
};


int main(){
    Queue q;
    q.push(5);
    q.push(55);
    q.push(55);
    q.push(65);
    q.push(85);

    cout<<q.front()<<endl;

    q.pop();
    q.pop();
    q.pop();

    cout<<q.front()<<endl;


    return 0;
}