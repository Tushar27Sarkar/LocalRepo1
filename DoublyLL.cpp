#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{

    Node * prev;
    int data;
    Node * next; 

    Node(int d){
        this->data =d ;
        this->prev=NULL;
        this->next=NULL; 
    }

    ~Node(){
        int value = this-> data;
        if(this->next!= NULL ){
            // delete next;
            this->next = NULL;
            this->prev = NULL;
        }
        cout<<"memory is free for node with data "<< value<<endl;
    }
};
void print(Node* head ){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int GetLength(Node * head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }

    return len;
}

void insertAthead(Node * &head,Node * &tail,int data){
    if(head==NULL){
        Node* temp = new Node(data);
        head  = temp;
        tail   = temp;
    }
    else
    {Node * temp = new Node(data);
    temp->next=head;
    head->prev=temp; 
    head=temp;}
}

void insertAtTail(Node * &head,Node * &tail,int data){
    if(tail==NULL){
        Node* temp = new Node(data);
        head    = temp;
        tail   = temp;
    }
    else
    {Node* temp = new Node(data);
    tail->next= temp;
    temp->prev=tail;
    tail=temp;}

}

void insertAtPosition(Node * &head,Node * &tail,int pos,int data){
    if(pos==1){
        insertAthead(head,tail,data);
        return ;
    }
    int count=1;
    Node* curr = head;
    
    while(count<pos-1){

        
        curr=curr->next;
        
        count++;
    }
    if(curr->next==NULL){
        insertAtTail(tail,tail,data);
        return ;
    }
    Node* tempo=new Node(data);
    tempo->next=curr->next;
    curr->next->prev=curr;
    curr->next=tempo;
    tempo->prev=curr;


    
}

void deleteNode(Node* &head,Node* &tail,int pos){
    if(pos==1){
        Node* temp = head;
        temp->next->prev=NULL;
        head  = temp -> next;
        temp->next=NULL;
        delete temp;
    }
    else {
        Node* current = head;
        Node* prev = NULL;

        int count=1;
        while(count<pos){
            prev = current;
            current =current->next;
            count++;
            
        }
        prev->next=current->next;
        if(prev->next==NULL){
            tail=prev;
            delete current;
        }
        else{

        current->next->prev = current->prev;
        
        
        delete current;
        }
    }
}

void rev(Node* &head){
    Node* curr=head;
    Node* pre=NULL;
    while(curr!=NULL){
        Node* forward=curr->next;
        // Node* backward=curr->prev;
        curr->next=pre;
        curr->prev=forward;
        pre=curr;
        curr=forward;
    }
    head=pre;
}
int main(){
    
    // Node* node1 = new Node(100);
    

    // Node* head= node1;
    
    
    // Node* tail=node1;
    // insertAthead(head,80);
    // insertAthead(head,60);
    // insertAthead(head,40);
    // insertAthead(head,20);
    Node* node1 = new Node(20);
    Node* node2 = new Node(40);
    Node* node3 = new Node(60);
    Node* node4 = new Node(80);

    Node* head= node1;
    Node* tail=node4;
    node1->next=node2; 
    node1->prev=NULL; 
    node2->next=node3; 
    node2->prev=node1; 
    node3->next=node4; 
    node3->prev=node2; 
    node4->next=NULL; 
    node4->prev=NULL; 
    
    // insertAtPosition(head,tail,5,10);
    // print(head);
    // cout<<endl;
    // cout<<endl;
    // cout<<endl;
    // cout<<head->data<<endl;
    // cout<<tail->data<<endl;
    // // cout<< "length is "<<GetLength(head);
    // deleteNode(head,tail,5);
    // cout<<endl;
    // cout<<head->data<<endl;
    // cout<<tail->data<<endl;

     print(head);
    cout<<endl;
    rev(head);
    cout<<endl;
     print(head);
    return 0;
}