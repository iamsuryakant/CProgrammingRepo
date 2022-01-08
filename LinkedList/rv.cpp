// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

Node *reverseLL(Node* head)
{
    Node *prev = nullptr;
    Node *next = nullptr;

    Node* curr = head;

    while(curr != NULL)
    {
        next = curr->next;   // 1 -> 2 -> 3 -> 4 -> 5 
        curr->next = prev;
        prev = curr;
        curr = next;
        //curr->next = next;

    }
    return prev;
}

void Print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main() {
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    Node *temp= reverseLL(head);
    Print(temp);

    return 0;
}