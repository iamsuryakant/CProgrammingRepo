#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *root;
    Node*left;
    Node*right;
    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

//Inorder Traversal
void inorder(Node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        cout<< (root->data)<< " ";
        inorder(root->right);
    }
}

// Preorder Traversal

void preorder(Node *root)
{
    if(root != NULL)
    {
        cout<< (root->data)<< " ";
        preorder(root->left);
        preorder(root->right);
    }
}

//Post Order Traversal

void postorder(Node *root){
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<< (root->data)<< " ";
    }
}


//Height of tree

int  height(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    else{
        return max(height(root->left), height(root->right)+1);
    }

}

//Print Node at distance K

void printNode(Node *root, int K)
{
    if(root == NULL)
    {
        return;
    }

    if(K==0)
    {
        cout<<(root->data)<<" ";
    }

    else{
        printNode(root->left, K-1);
        printNode(root->right, K-1);
    }

}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->right = new Node(35);
    root->left->left = new Node(25);

    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    cout<<height(root)<<endl;
    printNode(root,1);
}