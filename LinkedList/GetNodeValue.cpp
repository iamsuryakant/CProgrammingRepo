#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};


int GetNodeValue(Node *head, int n)
{
    Node *curr = head;
   Node *sec = head;
    
    for(int i = 0; i<n; i++)
    {
        sec = sec->next;
    }
    
    while(sec->next != NULL)
    {
        curr = curr->next;
        sec = sec->next;
    }
    
    return curr->data;
}

int main(){

     Node *head;

    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout<<GetNodeValue(head,1);
}