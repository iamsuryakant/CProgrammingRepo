// Codeforces 

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

// int firstMissing(vector<int> &arr, int start, int end){

//     if(start > end)
//         return end+1;
    
//     if(start != arr[start])
//         return start;

//     int mid = (start + end)/2;


//     if(arr[mid] == mid)
//         return firstMissing(arr, mid+1, end);

    
//     return firstMissing(arr, start, mid);
// }



int main(int argc, char const *argv[]) {
    file_i_o();

    int t; cin>>t;

    while(t--){

        // int n,m;
        // cin>>n>>m;

        // vector<int> arr;
        // for(int i = 0; i<=m ; i++)
        // {
        //     int inp = n^i;

        //     arr.pb(inp);
        // }

        // sort(arr.begin(), arr.end());

        // cout<<firstMissing(arr, 0, m-1)<<"\n";

    int n, m; cin >> n >> m;
    ++m;
    int ans = 0;
    for (int k = 30; k >= 0 and n < m; k--) {
      if ((n >> k & 1) == (m >> k & 1)) continue;
      if (m >> k & 1) ans |= 1 << k, n |= 1 << k;
    }
    cout << ans << '\n';

    //    if(arr[0] != 0){
    //         cout<<0<<"\n";
    //         break;
    //    }
        
    //     else{
    //         for(int i = 1; i<=m ; i++)
    //         {
    //             //arr[i-2] = -1;
    //             //int temp = arr[0];

    //             if((arr[i] - arr[i-1]) == 1){
    //                 continue;
    //             }

    //             else{

    //                 // if(arr[i] - arr[i-1] == -1)
    //                 //     cout<<"0"<<endl;
                    
    //                 if(arr[i] - arr[i-1] != 1){
    //                     cout<<arr[i-1]+1<<endl;
    //                     break;
    //                 }


    //             }
    //         }
    //     }

        // for(int i = 0; i<=m; i++)
        // {
        //     cout<<arr[i]<<" ";
        // }





    }
    return 0;
}
