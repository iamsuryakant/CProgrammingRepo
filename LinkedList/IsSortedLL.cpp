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

bool isAsc(Node *head)
{
    Node *curr = head;
    while(curr->next != NULL && curr->data <= curr->next->data)
    {
        curr = curr->next;
    }
    
    if(curr->next == NULL)
        return true;
    else
        return false;
}


bool isdec(Node *head)
{
    Node *curr = head;
    while(curr->next != NULL && curr->data >= curr->next->data)
    {
        curr = curr->next;
    }
    
    if(curr->next == NULL)
        return true;
    else
        return false;
}
bool isSorted(Node * head)
{
    //Your code here
    return isAsc(head)|| isdec(head);
    
}

int main(){
    Node *head = new Node(20);
    head->next = new Node(10);
    // head->next->next = new Node(60);
    // head->next->next->next = new Node(40);
    // head->next->next->next->next = new Node(50);
    cout<<isSorted(head);
}

