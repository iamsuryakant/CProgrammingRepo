#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int>adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(){
    int V= 4;
    vector<int>adj[V];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,1,3);

    for(int i=0;i<V;i++){
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}