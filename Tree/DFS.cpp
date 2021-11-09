#include<bits/stdc++.h>

using namespace std;

vector<int> adj[100005];


// dfs technique


void dfs(int node, int par){
    cout<<node<<" ";

    for(auto it:adj[node]){
        if(it!=par)
            dfs(it, node);
    }
    //stack<int> s;
}

//for level of tree..

int height;
int subtree[100005];

void dfs1(int node, int par, int level){
    cout<<node<<" ";
    
    int height = max(height, level);

    int sum = 0;

    for(auto it:adj[node]){
        if(it!=par)
            dfs1(it, node, level+1);
            sum += subtree[it];
    }
    //stack<int> s;
    subtree[node] = sum + 1;
}

int main(){

    int n; cin>>n;

    for(int i = 0; i<n-1; i++)
    {
        int u, v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

}