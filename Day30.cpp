//Linked Representation of Binary Tree #2
#include<iostream>
using namespace std;

struct node 
{
    int data;
    node* left;
    node* right;
};

node* createNode(int data)
{
    node* newNode = new node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void preorder(node* root) {
    if(root!=NULL) {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(node* root) {
    if(root!=NULL) {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

int main()
{
node* root = NULL;
   root =  createNode(11);
   root->left = createNode(22);
   root->right = createNode(33);
   
   root->left->left = createNode(44);
   root->left->right = createNode(55);
   
   root->right->left = createNode(66);
   root->right->right = createNode(77);
   
   cout<<"\nPreorder: ";
   preorder(root);
   cout<<"\ninorder:";
   inorder(root);     
   
}