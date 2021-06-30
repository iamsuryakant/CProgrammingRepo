#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

struct LinkedListImplementation
{
    Node *head;
    int size;

    LinkedListImplementation()
    {
        head = NULL;
        size = 0;
    }

    void push(int x)
    {
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
        size++;
    }

    int pop(){
        if(head == NULL)
        {
            return INT_MIN;
        }

        int res = head->data;

        Node *temp = head;
        head = head->next;
        delete (temp);
        size--;
        return res;
    }
};


int main(){

    LinkedListImplementation ll;

    ll.push(10);
    ll.push(20);
    ll.push(30);
    ll.push(40);

    cout << ll.pop() <<endl;
}

