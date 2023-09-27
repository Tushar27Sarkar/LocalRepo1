#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{

    Node * next;
    int data;

    Node(int data){
        this->data = data;
        this->next= NULL;
    }
};
void print(Node* &head){
    Node * temp=head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void rev(Node * &head){
    Node* prev=NULL;
    Node* curr=head;
    Node* forward ;
    while(curr!=NULL){
    Node* forward= curr->next;
    // cout<<forward->data<<" ";
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    head=prev;
    print(head);
}
void rev1(Node * &head,Node* &curr,Node*  &prev){

    if(curr==NULL){
        head=prev;
        return ;
    }
    int k=2;
    int cnt=1;
    while(cnt<=k){
        curr->next=prev;
        prev=curr;
        // curr=forward;
    }
   Node* forward=curr->next ;
    rev1(head,forward,curr);
    curr->next=prev;


}
int main(){
    Node* node1 = new Node(20);
    Node* node2 = new Node(40);
    Node* node3 = new Node(60);
    Node* node4 = new Node(80);

    Node* head= node1;
    node1->next=node2; 
    node2->next=node3; 
    node3->next=node4; 
    node4->next=NULL; 
    Node* tail= node4;
    print(head);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    rev(head);
   
    
    return 0;
}