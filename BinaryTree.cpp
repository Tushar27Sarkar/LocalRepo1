#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct node
{
    /* data */
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *tree(node *root)
{
    cout << "Enter the data " << endl;
    int data;
    cin >> data;

    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data for inserting in left of " << data << endl;
    root->left = tree(root->left);
    cout << "Enter the data for inserting in right of " << data << endl;
    root->right = tree(root->right);

    return root;
}

void leverorderTransversal(node *root)
{
    queue<node *> q;

    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }
}


void reverseorderTransversal(node* root){
    stack <node*> s ;
    queue <node*> q ;

    q.push(root);
    

    while(!q.empty()){
        node* temp = q.front();
        s.push(temp);
        q.pop();
        if (temp->left != NULL)
            {
                q.push(temp->left);
            }

        if (temp->right != NULL)
            {
                q.push(temp->right);
            }
    }

    while(!s.empty()){
        node* temp = s.top();
        cout<<temp->data<<" ";
        s.pop();
    }
}

void inorderTransversal(node* root){
    if(root==NULL){
        return ;
    }
    inorderTransversal(root->left);
    cout<<root->data<<" ";
    inorderTransversal(root->right);
}

void preorderTransversal(node* root){
    if(root==NULL){
        return ;
    }
     cout<<root->data<<" ";
    preorderTransversal(root->left);
    preorderTransversal(root->right);
}

void postorderTransversal(node* root){
    if(root==NULL){
        return ;
    }
    postorderTransversal(root->left);
    postorderTransversal(root->right);
    cout<<root->data<<" ";
}

void BuildTree(node* &root){
    int data;
    queue<node*> q;
    // queue <node*> q ;
    cout<<"enter the root: "<<endl;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter the left node of "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;

        if(leftdata!= -1){
            temp->left = new node(leftdata);
            q.push(temp->left);
        }


        cout<<"Enter the right node of "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;

        if(rightdata!= -1){
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }


}
int main()
{

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    node *root = NULL;
    BuildTree(root);
    leverorderTransversal(root);
    // root = tree(root);

    // leverorderTransversal(root);
    // cout<<endl;
    // cout<<endl;

    // reverseorderTransversal(root);   
    // cout<<endl;
    // cout<<endl;

    // inorderTransversal(root);
    // cout<<endl;
    // cout<<endl;

    // preorderTransversal(root);
    // cout<<endl;
    // cout<<endl;

    // postorderTransversal(root);
    // cout<<endl;
    // cout<<endl;
    cout<<"namaste"<<endl;
    return 0;
}