#include<bits/stdc++.h>

using namespace std;

void topo(vector<pair<int, int>>adj[], int s, stack<int>&st, vector<bool>&visited)
{
    visited[s] = true;

    for(auto u: adj[s])
    {
        if(visited[u.first] == false)
            topo(adj, u.first, st, visited);
    }
    st.push(s);
}



void shortestPath(int s, int n, vector<pair<int, int>>adj[])
{
    vector<bool> visited(n, false);
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        if(visited[i] == false)
        {
            topo(adj, i, st, visited);
        }
    }

    int dist[n];

    for(int i = 0; i < n; i++)
        dist[i] = INT_MAX;

    dist[s] = 0;

    while(st.empty() == false)
    {
        int u = st.top();
        st.pop();
        cout << u << " ";
        if(dist[u] != INT_MAX)
        {
            for(auto it: adj[u])
            {
                if(dist[it.first] > dist[u] + it.second)
                {
                    dist[it.first] = dist[u] + it.second;
                }
            }
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if(dist[i] == INT_MAX)
        {
            cout << "INF"<< " ";
        }
        else{
            //cout << endl;
            cout << dist[i] << " ";
        }
    }
}


int main(){

    int n, m;
    cin >> n>>m;

    vector<pair<int, int>> adj[n];

    for (int i = 0; i < m; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;

        adj[u].push_back({v, wt});
   }

   shortestPath(0, n, adj);
   
   
   return 0;
}