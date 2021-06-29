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

bool comparell(Node *head1, Node *head2)
{
    if(head1 == NULL && head2 == NULL)
    {
        return true;
    }
    else if(head1 == NULL || head2 == NULL){
        return false;
    }

    if(head1->data == head2->data)
    {
        return comparell(head1->next, head2->next);
    }
    else{
        return false;
    }
}
int main(){

    Node *head1, *head2;

    head1 = new Node(10);
    head1->next = new Node(20);
    head1->next->next = new Node(30);

    head2 = new Node(10);
    head2->next = new Node(20);
    head2->next->next = new Node(30);
    head2->next->next->next = new Node(40);

    cout<<comparell(head1, head2);

}