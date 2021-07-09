#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
#define ll 				long long int
#define ld				long double
#define mod             1000000007
#define inf             1e18
#define endl			"\n"
#define pb 				emplace_back
#define vi              vector<ll>
#define vs				vector<string>
#define pii             pair<ll,ll>
#define ump				unordered_map
#define mp 				map
#define pq_max          priority_queue<ll>
#define pq_min          priority_queue<ll,vi,greater<ll> >
#define ff 				first
#define ss 				second
#define mid(l,r)        (l+(r-l)/2)
#define loop(i,a,b) 	for(int i=(a);i<=(b);i++)
#define looprev(i,a,b) 	for(int i=(a);i>=(b);i--)
#define log(args...) 	{ string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
#define logarr(arr,a,b)	for(int z=(a);z<=(b);z++) cout<<(arr[z])<<" ";cout<<endl;	
#define token(str,ch)	(std::istringstream var((str)); vs v; string t; while(getline((var), t, (ch))) {v.pb(t);} return v;)
vs tokenizer(string str,char ch) {std::istringstream var((str)); vs v; string t; while(getline((var), t, (ch))) {v.pb(t);} return v;}


void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cout << *it << " = " << a << endl;
    err(++it, args...);
}
//typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;

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

void DFSRec(vector<int>adj[], int s, bool visited[])
{
    visited[s] = true;
    cout<<s<<" ";
    for(int u:adj[s])
    {
        if(!visited[u])
            DFSRec(adj, u, visited);
    }
}

void DFS(vector<int>adj[], int V, int s)
{
    bool visited[V];
    for(int i=0;i<V;i++)
        visited[i] = false;
    DFSRec(adj, s, visited);
}

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].pb(v);
    adj[v].pb(u);
}

// void printEdge(vector<int> adj[], int v)
// {
//     for(int i = 0; i<v; i++)
//     {
//         for(int j = 0; j<adj[i].size(); j++)
//         {
//             cout<<adj[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


int main(int argc, char const *argv[]) {
    file_i_o();

    int V = 5;
    vector<int>adj[V];
    //Input From User
    int u, v;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>u>>v;
        addEdge(adj, u, v);
    }
    //Printing Adjacency List
    DFS(adj, V, 0);

    // addEdge(adj, 0, 1);
    // addEdge(adj, 0, 4);
    // addEdge(adj, 1, 2);
    // addEdge(adj, 1, 3);
    // addEdge(adj, 2, 3);
    // addEdge(adj, 3, 4);

    return 0;
}
