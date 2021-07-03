#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;

    }
};

Node *reverseDLL(Node *head)
{
    if(head == NULL || head->next == NULL)
        return head;
    
    Node *curr = head;
    Node *temp = NULL;

    while(curr != NULL) 
    {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }

    return temp->prev;
}

void PrintList(Node *head)
{
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main(){

    Node *head = new Node(1);
    Node *temp1 = new Node(2);
    Node *temp2 = new Node(3);
    Node *temp3 = new Node(4);

    head->next = temp1;
    temp1->prev= head;
    temp1->next = temp2;
    temp2->prev = temp1;
    temp2->next = temp3;
    temp3->prev = temp2;

    Node *reverse = reverseDLL(head);
    PrintList(reverse);

    return 0;

}