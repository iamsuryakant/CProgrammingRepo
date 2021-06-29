#include<bits/stdc++.h>

using namespace std;

struct Node{

    int data;

    Node *next;

    Node(int x)
    {
        data = x;

        next = NULL;
    }
};


bool DetectCycleLl(Node *head)
{
        Node *slow = head;
        Node *fast = head;
        
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast)
            {
                return true;
            }
        }
        return false;
}

int main(){

    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    head->next->next = head;
    // head->next->next = new Node(4);

    cout<<DetectCycleLl(head);

}