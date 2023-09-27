#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    /* data */
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;

    }
};
int midlen(Node* &head){
    int count=0;
    
    Node* temp=head;
    Node* temp1=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    int mid=(count/2)+1;
    int midcnt=1;
    while(midcnt<mid){
        temp1=temp1->next;
        midcnt++;
    }
    return temp1->data;
    
    
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
    int mid = midlen(head);
    cout<<mid;
    return 0;
}