#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

int sumofLeftLeaves(Node *root){
    if(root == NULL)
        return 0;
    if(root->left == NULL && root->right->left == NULL)
        return root->data;
    return sumofLeftLeaves(root->left) + sumofLeftLeaves(root->right->left);
}


int main(){
    //Tree
    Node *root = new Node(1);
     root->left = new Node(5);
    root->right = new Node(2);
    root->right->left = new Node(3);
    
    // inorderTraversal(root);

    cout<<sumofLeftLeaves(root);
    return 0;
}