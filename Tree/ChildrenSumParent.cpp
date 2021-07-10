#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};


int isSumProperty(Node *root){
    
    if(root == NULL){
        return 1;
    }

    if(root->left == NULL && root->right == NULL){
        return 1;
    }

    int sum = 0;
    if(root->left != NULL){
        sum += root->left->data;
    }
    
    if(root->right != NULL){
        sum += root->right->data;
    }

    return (root->data == sum) && isSumProperty(root->left) && isSumProperty(root->right);

}



int main() {

    Node *root = new Node(10);
    root->left = new Node(10);

    cout << isSumProperty(root);
    return 0;
}