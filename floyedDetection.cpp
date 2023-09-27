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
Node * floyedDetection(Node * head){
    if(head==NULL){
        return head;
    }
    
    Node * slow=head;
    Node * fast= head;
    while(fast != NULL && slow != NULL){
        fast=fast->next;
        if(fast->next!= NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            // del(head,slow);
            return slow;
        }
        
    }
    return NULL;
}

Node * getStartingNode(Node * head){
    if(head==NULL){
        return NULL;
    }

    Node * intersection = floyedDetection(head);
    Node * slow = head;
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;  
}

void removeLoop(Node *head){
    if(head==NULL){
        return ;
    }

    Node * startofLoop = getStartingNode(head);
    Node* temp= startofLoop;
    while (temp->next!=startofLoop){
        temp=temp->next;
    }
    temp->next=NULL;
}
int main(){
    
    return 0;
}