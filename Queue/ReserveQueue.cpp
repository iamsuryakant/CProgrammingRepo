#include<bits/stdc++.h>

using namespace std;


void print(queue<int> &q)
{
    while(q.empty() == false)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}

void reverse(queue<int> &q)
{
    stack<int> st;

    while(q.empty() == false)
    {
        st.push(q.front());
        q.pop();
    }

    while(st.empty() == false)
    {
        q.push(st.top());
        st.pop();
    }
}

int main(){

    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    reverse(q);
    print(q);

}