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

int MaxInBT(Node *root)
{
    if(root == nullptr)
        return INT_MIN;
    
    else
        return max(root->data, max(MaxInBT(root->left), MaxInBT(root->right)));
}


int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->right = new Node(35);
    root->left->left = new Node(25);

    cout<<MaxInBT(root)<<endl;
    //printNode(root,1);
}