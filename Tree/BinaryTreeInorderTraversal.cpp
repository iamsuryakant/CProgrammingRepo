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

// Using Vector For Leetcode Solution

/*vector<int> vec;
vector<int> inorderTraversal(Node *root)
{
    
    if(root == NULL)
        return vec;
    inorderTraversal(root->left);
    vec.push_back(root->data);
    inorderTraversal(root->right);
    return vec;
    
}*/


void Print(Node *root)
{
    if(root == NULL)
        return;
    Print(root->left);
    cout << root->data << " ";
    Print(root->right);
}

int main(){
    //Tree
    Node *root = new Node(1);
    // root->left = new Node(NULL);
    root->right = new Node(2);
    root->right->left = new Node(3);
    
    // inorderTraversal(root);

    Print(root);
    return 0;
}