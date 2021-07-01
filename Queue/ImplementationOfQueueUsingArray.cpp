#include<bits/stdc++.h>

using namespace std;

struct ImplementationOfQueueUsingArray
{
    int *arr;
    int front, cap, size;

    ImplementationOfQueueUsingArray(int x)
    {
        arr = new int[x];
        cap = x;
        front = 0;
        size = 0;
    }


    bool isFull()
    {
        return (size == cap);
    }

    bool isEmpty(){
        return (size == 0);
    }

    void enqueue(int x)
    {
        if(isFull())
        {
            return;
        }

        int rear = getRear();
        rear = (rear+1)%cap;
        arr[rear] = x;
        size++;
    }

    void dequeue()
    {
        if(isEmpty())
        {
            return;
        }
        front = (front + 1)%cap;
        size--;
    }

    int getFront()
    {
        if(isEmpty())
            return -1;
        else
            return front;
    }

    int getRear()
    {
        if(isFull())
            return -1;
        else
            return (front + size-1)%cap;
    }
};



int main(){

    ImplementationOfQueueUsingArray q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.dequeue();

    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;

}