#include<bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void reverseLL(Node *head)
{
    if(head==NULL)
        return;
    reverseLL(head->next);
    cout<<head->data<<" ";
}

int main() {
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    reverseLL(head);
    return 0;
}