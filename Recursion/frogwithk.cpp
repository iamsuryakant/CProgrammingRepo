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

// int solvefro(int ind, int arr[], int n, vector<int>&dp) {

// 	//base case

// 	if (ind == 0)
// 		return 0;

// 	if (dp[ind] != -1)
// 		return dp[ind];

// 	int left = solvefro(ind - 1, arr, n, dp) + abs(arr[ind] - arr[ind - 1]);

// 	int right = INT_MAX;
// 	if (ind > 1) {
// 		right = solvefro(ind - 2, arr, n, dp) + abs(arr[ind] - arr[ind - 2]);
// 	}

// 	return dp[ind] = min(left, right);
// }


void solve() {

	int n, k; cin >> n >> k;

	int arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	// for (int i = 0; i < n; i++)
	// 	cout << arr[i] << " ";

	int dp[n];

	dp[0] = 0;

	for (int i = 1; i < n; i++)
	{
		int min_steps = INT_MAX;

		for (int j = 1; j <= k; j++)
		{
			if (i - j >= 0) {
				int jump = dp[i - j] + abs(arr[i] - arr[i - j]);
				min_steps = min(min_steps, jump);
			}
		}

		dp[i] = min_steps;
	}

	cout << dp[n - 1];

}


int main() {
	file_i_o();
	// int t; cin>>t;

	//while(t--){

	solve();
	//}
	return 0;
}