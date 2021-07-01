#include<bits/stdc++.h>

using namespace std;

struct Node {

    Node *next;
    int data;

    Node(int x)
    {
        data = x;
        next = NULL;
    }

};

struct QueueUsingLL
{
    Node *front, *rear;

    QueueUsingLL()
    {
        front = rear = NULL;
    }

    void enqueue(int x)
    {
        Node *temp = new Node(x);

        if(rear == NULL){
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }

    void dequeue(){
        if(front == NULL)
        {
            return;
        }
        Node *temp = front;
        front = front->next;
        if(front == NULL)
            rear = NULL;
        delete(temp);
    }
};


int main(){

    QueueUsingLL q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.dequeue();

    cout<<"Queue Front: "<<(q.front)->data<<endl;
    cout<<"Queue rear: "<<(q.rear)->data<<endl;

}