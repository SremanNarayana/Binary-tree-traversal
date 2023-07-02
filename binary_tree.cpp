#include<iostream>
using namespace std;
// Code for a binary-tree.
class node{
    public:
        int data;
        node * left;
        node * right;


        node(int value){
            data = value;
            left = NULL;
            right = NULL;
        }

};
//Code for in-order traversal in a tree.
void inOrder(node* Node){
    if(Node == NULL){
        return;
    }
    else{
        inOrder(Node->left);
        cout<<Node->data<<" ";
        inOrder(Node->right);
    }
}
// Code for Pre-order traversal in a tree.
void preOrder(node * Node){
    if(Node == NULL){
        return;
    }
    else{
        cout<<Node->data<<" ";
        preOrder(Node->left);
        preOrder(Node->right);
    }
}

//Code for post-order traversal in a tree.

void postOrder(node * Node){
    if(Node == NULL){
        return;
    }
    else{
        postOrder(Node->left);
        postOrder(Node->right);
        cout<<Node->data<<" ";

    }

}

int main(){
        node * root = new node(1);
        root->left = new node(2);
        root->right  = new node(3);
        root->left->left = new node(4);
        root->left->right = new node(5);
        root->right->left = new node(7);
        root->right->right = new node(8);
        root->left->right->left = new node(6);
        root->right->right->left = new node(9);
        root->right->right->right= new node(10);

        cout<<"in-order   :" ; inOrder(root);
        cout<<" "<<endl;
        cout<<"pre-order  :" ;preOrder(root);
        cout<<" "<<endl;
        cout<<"post-order :" ;postOrder(root);
}
