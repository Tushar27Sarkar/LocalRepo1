#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;

    //constructor
    Node (int data){
        this->data = data ;
        this ->next=NULL;
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

void InsertAtHead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head=temp; 
}

void print (Node* &head){
    Node* temp= head;
    while(temp!= NULL){
        cout<< temp->data <<" ";
        temp= temp->next;
    }
}

void InsertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail=temp;
}

void InsertAtMiddle(Node* &Node_left,Node* &Node_right ,int data){
    Node* temp = new Node(data);
    Node_left-> next = temp;
    temp->next = Node_right;
}

void InsertAtPosition(Node* &head,Node* & tail,int pos,int data){
    if(pos==1){
        InsertAtHead(head,data) ;
        return ;
    }
    Node* temp = head;
    int count=1;
    while(count<pos-1){
        temp = temp->next;
        count++;
    }
    if(temp->next==NULL){
        InsertAtTail(tail,data);
        return ;
    }
    Node * nodeToInsert = new Node(data);
    nodeToInsert->next = temp ->next;
    temp ->next = nodeToInsert;
}

void deleteNode(Node* &head,Node* &tail,int pos){
    
    if(pos == 1){
       Node * temp =head; 
        head=temp->next;
        
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
        }
        
        delete current;
    }
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
    InsertAtMiddle(node3,node4,50);
    InsertAtPosition(head,tail,6,66);
    InsertAtPosition(head,tail,7,86);
    
    print(head);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    // cout<<endl;
    // cout<<endl;
    // InsertAtHead(node3,12);
    // print(node3);

    // Node node3(60);
    // cout<<node1 ->data <<endl;
    // cout<<node1 ->next <<endl;
//    Node* tail= node1;
//    InsertAtTail(tail,40);
//    InsertAtTail(tail,60);
//    InsertAtTail(tail,80);
//    InsertAtTail(tail,100);
//    print(head);
    cout<<endl;
    cout<<endl;
    cout<<endl;

    deleteNode(head,tail,7);
    print(head);
     cout<<endl;
    cout<<endl;
    cout<<head->data<<endl;
    cout<<tail->data<<endl; 
    
    

    return 0;
}