#include<iostream>
// #include<bits/stdc++.h>
using namespace std;


struct Stack  //stack implementation can be done in 2 forms that are array and  LL
{
    int *arr;
    int top,size;

    Stack(int size){
        this->size=size;
        arr = new int[size];
        top=-1;
    }

    void push(int element){
        if (top==size-1){
            cout<<"stack overflow"<<endl;
        }
        else{
            top++;
            arr[top]=element;
        }
    }

    void pop(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
        }
        else{
            top--;
        }
    }

    int peek(){
        if(top>=0 ){

            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isFull(){
        if(top==size-1){
            cout<<"Stack is empty"<<endl;
            return true;
        }
        else{
            cout<<"Stack is not empty"<<endl;
            return false;
        }
    }
};

int main(){
    Stack st(5);

    st.push(52);
    st.push(5289);
    st.push(5255);

    cout<<st.peek()<<endl;
    cout<<st.isFull()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;

    return 0;
}