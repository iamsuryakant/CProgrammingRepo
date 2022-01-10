#include<bits/stdc++.h>

// Suryakant Thakur

using namespace std;

#define ll 				long long int
#define ld				long double
#define mod             1000000007
#define inf             1e18
#define endl			"\n"
#define pb 				push_back
#define vi              vector<ll>
#define vs				vector<string>
#define pii             pair<ll,ll>
#define ump				unordered_map
#define mp 				map
#define pq_max          priority_queue<ll>                                  // max heap
#define pq_min          priority_queue<ll,vi,greater<ll> >                  // min heap
#define fi 				first
#define sec 			second
#define mid(l,r)        (l+(r-l)/2)
#define floop(i,a,b)    for(int i = (a); i <= (b); i++)
#define rloop(i,a,b)    for(int i = (a); i >= (b); i--)


void file_i_o()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}


bool DFSrec(vector<int>adj[], int s, vector<bool>&visited, int parent)
{
    visited[s] = true;

    for(auto it:adj[s])
    {
        if(visited[it] == false)
        {
            if(DFSrec(adj, it, visited, s))
            {
                return true;
            }
        }
        else if(it != parent)
        {
            return true;
        }
    }
    return false;
}



bool canFinish(int n, vector<vector<int>>& pre) {

    vector<int> adj[n];
        
        // creating a graph using prerequisites
        for(int i = 0; i < pre.size(); i++){
            adj[pre[i][1]].push_back(pre[i][0]);
        }
    //int V = g.size();

    vector<bool> visited(n, false);

    for(int i = 0; i<n; i++)
    {
        if(visited[i] == false)
        {
            if(DFSrec(adj, i, visited, -1))
            {
                return true;
            }
        }
    }
    return false;
}


int main(){
    file_i_o();
    
    return 0;
}
