#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node * next;
    Node * prev;

    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    } 

    ~Node(){
        int value = this-> data;
        if(this->next!=next){
            this->next=NULL;
        }
        cout<<"Deleting "<<value<<endl;
    }
};

void insertNode(Node * &tail,int pos,int data){
    if(tail==NULL){
        Node * temp= new Node(data);
        tail=temp;
        temp->next=temp;
        return ;
    }
    else if(pos==1){
        Node * temp1 = new Node(data);
        tail->prev=temp1;
        temp1->next=tail;
        tail=temp1;
    }
    else{
        Node *temp2= new Node(data);
        int count=1;
        Node * curr=tail;
        while(count<pos-1){
            curr=curr->next;
            count++;
        }

    }

}

int main(){
    
    return 0;
}