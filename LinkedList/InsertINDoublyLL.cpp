#include<bits/stdc++.h>
using namespace std;

struct Node
{
    
    int data;
    Node * next;
    Node * prev;

    Node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};

void printList(Node * head)
{
    Node*curr = head;
    while(curr!=NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

/*Node *InsertBegin(Node *head, int data)
{
    Node *temp = new Node(data);
    
    temp->next = head;

    if(head!=NULL)
    {
        head->prev = temp;
    }
    return temp;
}*/

/*Node *InsertEnd(Node * head, int data)
{
    Node *temp = new Node(data);
    if(head==NULL)
    {
        return temp;
    }

    Node *curr = head;
    while(curr->next!=NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}*/

Node *reverse(Node *head)
{
    if(head== NULL || head->next == NULL)
        return head;
    
    Node *curr = head;
    Node *prev = NULL;
    while(curr!=NULL)
    {
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }
    return prev->prev;
}

int main(){

    Node *head = new Node(1);
    Node*temp1 = new Node(2);
    Node *temp2 = new Node(3);

    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;

    // Node* value = InsertEnd(head,5);
    Node *value  = reverse(head);
    printList(value);
}
