//Arr fi

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

int largest(vector<int>& v, int n){

    int maxn = v[0];

    for(int i = 1; i < n; i++)
    {
        if(v[i] > maxn)
            maxn = v[i];
    }

    return maxn;
}

int main(int argc, char const *argv[]) {
    file_i_o();

    int t; cin>>t;

    while(t--) {

        int n; cin>>n;

        vector<int> v(n);
        int inp;
        for(int i = 0; i<n; i++){
            cin>>inp;
            v.pb(inp);
        }

       // int maxn = v[0];

        //int avg1 = 0, avg2 = 0;

        int sum = 0;
        int sol;

        for(int i = 0; i<n; i++) {

            sum += v[i];
        }

        sum = sum - largest(v, n);

        int avg1 = sum/(n-1);
        int avg2 = largest(v,n);
        //avg2 = maxn;

        cout<<(avg1+avg2)/2<<"\n";

    }
    return 0;
}
