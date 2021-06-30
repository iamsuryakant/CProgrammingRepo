#include<bits/stdc++.h>

using namespace std;

struct StackImplementaionUsingVector
{
    vector<int> vec;

    void push(int x)
    { 
        vec.push_back(x);
    }

    int pop(){
        int res = vec.back();
        vec.pop_back();
        return res;
    }

    int peek(){
        return vec.back();
    }

    int size(){
        return vec.size();
    }

    bool isEmpty(){
        return vec.empty();
    }
};

int main(){
    StackImplementaionUsingVector s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
}
