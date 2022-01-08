#include<bits/stdc++.h>

using namespace std;

void DFS(vector<int>adj[], int s, stack<int>&st, vector<bool>&visited)
{

    visited[s] = true;
    for(int u:adj[s])
    {
        if(visited[u] == false)
        {
            DFS(adj, u, st, visited);
        }
    }
    st.push(s);
}


void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
   // adj[v].push_back(u);
}



int main(){
    int V;
    cin >> V;

    vector<int>adj[V];

    for(int i = 0; i<V; i++)
    {
        int u, v;
        cin>>u>>v;

        addEdge(adj, u, v);
    }
    //int n = adj.size();
    vector<bool> visited(V, false);

    stack<int> st;

    // DFS(adj, 0, V-1,   st, visited);

    for(int i = 0; i<V; i++)
    {
        if(visited[i] == false)
        {
            DFS(adj, i, st, visited);
        }
    }

    while(st.empty() == false)
    {
        //cout<<st.pop()<<endl;
        int u = st.top();
        st.pop();

        cout << u << " ";
    }
}