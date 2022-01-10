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

bool DFS(vector<int>adj[], int s, int color[])
{
   //color[s] = 1;
    for(auto it:adj[s])
    {
        if(color[it] == -1)
        {
            color[it] = 1 - color[s];
            if(!DFS(adj, it, color))
            {
                return false;
            }

        }
        else if(color[it] == color[s])
        {
            return false;
        }
    }
    return true;
}

bool checkBipartite(vector<int>adj[], int n)
{
    int color[n];

    memset(color, -1, sizeof(color));

    for (int i = 0; i<n; i++)
    {
        if(color[i] == -1)
        {
            color[i] = 1;
            if (!DFS(adj, i, color))
            {
                return false;
            }
        }
    }
    return true;
}

int main(){
    file_i_o();

    int n, m;

    cin>>n>>m;

    vector<int> adj[n];

    for(int i = 0; i<n; i++)
    {
        int u, v;
        cin>> u >> v;

        adj[u].pb(v);
        adj[v].pb(u);
    }

    if(checkBipartite(adj, n))
    {
        cout<<"YES"<<endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}
