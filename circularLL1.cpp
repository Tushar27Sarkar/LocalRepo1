#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    
    int data;
    Node * next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    
        ~Node(){
        int value = this-> data;
        if(this->next!= NULL){
            // delete next;
            this->next = NULL;
        }
        cout<<"memory is free for node with data "<< value<<endl;
    }
    
    
};

void insertNode(Node* &tail,int element,int data ){
    
    if(tail==NULL){
        Node * newNode= new Node(data);
        tail= newNode;
        newNode->next=newNode; 
    }
   
    else{
        Node* curr = tail;
        while(curr->data!= element){
            curr=curr->next;
        }
        Node * temp = new Node(data);
        temp->next=curr->next;
        curr->next=temp;

    }
}

void print(Node* tail){
    
    Node* temp = tail;
    if(tail==NULL){
        cout<<"List is Empty"<<endl;
    }
    do
    {
        
        cout<<tail->data<<" ";
        tail=tail->next;
    } while (tail!=temp);
    cout<<endl;
    
}


void deleteNode(Node* &tail,int element){
    
    Node * prev = tail;
    Node* curr = prev->next;
    if(curr=prev){
        tail=NULL;
    }
    while(curr->data!=element){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    if(curr== tail){
        tail=prev->next;
    }
    curr->next=NULL;
    delete curr;


}
int main(){
    Node* tail = NULL;

    insertNode(tail,5,3);
    //  print(tail);

    insertNode(tail,3,5);
    //  print(tail);
    insertNode(tail,5,7);
    //  print(tail);
    insertNode(tail,7,9);
    //  print(tail);
    insertNode(tail,9,1);
     print(tail);
     cout<<endl;
     cout<<endl;
     cout<<endl;
     cout<<endl;
    //  deleteNode(tail,3);
    //  print(tail);


    return 0;
}