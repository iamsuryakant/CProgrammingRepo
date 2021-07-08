#include<bits/stdc++.h>
using namespace std;

class Graph{
private:
    int V;    // No. of vertices
    bool **adj;    // Array representing the graph

    public:
    Graph(int V){    // To initialize the graph
        this->V = V;
        adj = new bool*[V];
        for(int i = 0; i<V; i++)
        {
            adj[i] = new bool[V];
            for(int j = 0; j<V; j++)
                adj[i][j] = false;
        }
    }

    void addEdge(int i, int j){
        adj[i][j] = true;
        adj[j][i] = true;
    }

    void removeEdge(int i, int j){
        adj[i][j] = false;
        adj[j][i] = false;
    }

    void toString(){
        for(int i = 0; i<V; i++)
        {
            cout<<i<<" : ";
            for(int j = 0; j<V; j++)
                cout<<adj[i][j]<<" ";
            cout<<endl;
        }
    }
};

int main(){
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);

    g.removeEdge(2,3);
    g.toString();
}