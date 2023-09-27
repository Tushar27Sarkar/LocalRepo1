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
Node* rev(Node* head,int k){
    if(head==NULL){
        
        return NULL ;
    }
    int cnt=0;
    Node* forward=NULL;
    Node* curr= head;
    Node* prev= NULL;
    while(cnt<k && curr!=NULL){
        forward= curr->next;
    
        curr->next=prev;
        prev=curr;
        curr=forward;
        cnt++;
    }
    if(forward!=NULL){

    head->next=rev(forward,k);
    }

    return prev;
}
int main(){
    Node* node1 = new Node(20);
    Node* node2 = new Node(40);
    Node* node3 = new Node(60);
    Node* node4 = new Node(80);
    Node* node5 = new Node(100);
    Node* node6 = new Node(120);

    Node* head= node1;
    node1->next=node2; 
    node2->next=node3; 
    node3->next=node4; 
    node4->next=node5; 
    node5->next=node6; 
    node6->next=NULL; 
    // Node* tail= node6;
    
    int k;
    cin>>k;
    print(head);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    Node* naggu =rev(head,k);
    print(naggu);
    return 0;
}