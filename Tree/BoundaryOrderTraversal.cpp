#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

bool isLeaf(node * root)
{
    return (!root->left && !root->right);
}


void addLeaves(node *root, vector<int>&res)
{
    if(isLeaf(root))
    {
        res.push_back(root->data);
        return;
    }
    if(root->left)
        addLeaves(root->left, res);

    if(root->right)
        addLeaves(root->right, res);
}


void addLeftBoundary(node * root, vector<int> &res)
{
    node *curr = root->left;

    while(curr)
    {
        if(!isLeaf(curr))
            res.push_back(curr->data);

        if(curr->left)
            curr = curr->left;
        else
            curr = curr->right;
    }
}

void addRightBoundary(node * root, vector<int> &res)
{
    node *curr = root->right;

    vector<int> temp;

    while(curr)
    {
        if(!isLeaf(curr))
            temp.push_back(curr->data);
        
        if(curr->right)
            curr = curr->right;
        else
            curr = curr->left;
    }

    for(int i = temp.size()-1; i>=0; i--)
    {
        res.push_back(temp[i]);
    }
}


vector <int> printBoundary(node* root)
{
    vector<int> res;

    if(!root)
        return res;

    if(!isLeaf(root))
        res.push_back(root->data);

    addLeftBoundary(root, res);

    addLeaves(root, res);

    addRightBoundary(root, res);

    return res;
}

int main()
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->left->left = new node(3);
    root->left->left->right = new node(4);
    root->left->left->right->left = new node(5);
    root->left->left->right->right = new node(6);
    root->right = new node(7);
    root->right->right = new node(8);
    root->right->right->left = new node(9);
    root->right->right->left->left = new node(10);
    root->right->right->left->right = new node(11);

    vector<int> boundary;
    boundary = printBoundary(root);

    cout << "Boundary Traversal is: ";

    for(int i = 0; i<boundary.size(); i++)
    {
        cout << boundary[i] << " ";
    }

    return 0;
}