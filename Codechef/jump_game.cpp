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

int jump(vector<int>& nums) {

	int n = nums.size();

	vector<int>dp(n, -1);

	dp[n - 1] = 0;


	for (int i = n - 2; i >= 0; i--)
	{
		int steps = nums[i];

		int min = INT_MAX;
		for (int j = 1; j <= steps && (i + j) < n; j++) {
			if (dp[i + j] != -1 && dp[i + j] < min) {
				min = dp[i + j];
			}
		}

		if (min != INT_MAX) {
			dp[i] = min + 1;
		}
	}

	return dp[0];


}






void solve() {

	int n; cin >> n;

	vector<int>nums(n);


	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}

	cout << jump(nums);



}


int main() {
	file_i_o();
	int t; cin >> t;

	while (t--) {

		solve();
	}
	return 0;
}
