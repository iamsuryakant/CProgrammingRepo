#include <bits/stdc++.h>

using namespace std;


struct Node {

    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = right = NULL;
    }

};


void levelOrderTraversal(Node *root)
{
    if(root == NULL)
        return;

    queue<Node *> q;

    q.push(root);

    while(q.empty()== false)
    {
        Node *curr = q.front();
        q.pop();

        cout<<curr->data<<" ";

        if(curr->left != NULL)
            q.push(curr->left);

        if(curr->right != NULL)
            q.push(curr->right);
    }
}
int main() {
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    levelOrderTraversal(root);

    return 0;
}