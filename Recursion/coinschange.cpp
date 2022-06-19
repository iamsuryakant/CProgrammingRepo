#include<bits/stdc++.h>


// Suryakant Thakur

using namespace std;


#define ll              long long int
#define ld              long double
#define mod             1000000007
#define inf             1e18
#define endl            "\n"
#define pb              push_back
#define vi              vector<ll>
#define vs              vector<string>
#define pii             pair<ll,ll>
#define ump             unordered_map
#define mp              map
#define ps(x, y)        fixed<<setprecision(y)<<x
#define pq_max          priority_queue<ll>                                  // max heap
#define pq_min          priority_queue<ll,vi,greater<ll> >                  // min heap
#define fi              first
#define sec             second
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


void combi(int ind, int n, int A[], int B, vector<int>&ds, int &ans) {

    if (ind == n) {
        if (B == 0) {
            // for (auto it : ds) {
            //     cout << it << " ";
            // }
            // cout << endl;
            ans++;
        }
        return;
    }

    if (A[ind] <= B) {
        //picking condition

        ds.push_back(A[ind]);
        combi(ind, n, A, B - A[ind], ds, ans);
        ds.pop_back();
    }

    //non picking

    combi(ind + 1, n, A, B, ds, ans);

}


void combicount(int A[], int m, int n) {
    // Your code here

    //int n = A.size();

    //vector<vector<int>>ans;

    vector<int>ds;
    int ans = 0;

    combi(0, m, A, n, ds, ans);

    cout << ans << endl;

}


void solve() {

    int n, m;
    cin >> n >> m;

    int arr[m];

    for (int i = 0; i < m; i++)
        cin >> arr[i];

    //cout << count(arr, m, n);
    // for (int i = 0; i < m; i++)
    //     cout << arr[i];
    // vector<int>ds;

    // int ans = 0;

    // coins(0, arr, m, n, ans, ds);
    combicount(arr, m, n);

}


int main() {
    file_i_o();
    solve();
    return 0;
}
