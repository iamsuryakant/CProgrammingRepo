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

int q(int l, int r, int pre_sum[]) {

	if (l) {
		return pre_sum[r] - pre_sum[l - 1];
	} else {
		return pre_sum[r] - 0;
	}
}



void solve() {

	int n, s; cin >> n >> s;

	vector<int>arr(n);

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int pre_sum[n];

	pre_sum[0] = arr[0];

	for (int i = 1; i < n; i++)
	{
		pre_sum[i] = arr[i] + pre_sum[i - 1];
	}


	int ans = INT_MAX;

	for (int i = 0; i < n; i++)
	{
		int l = 0, r = n - 1, init_pos = -1;

		while (l <= r) {
			int m = mid(l, r);

			if (q(i, m, pre_sum) <= s) {
				init_pos = m;
				l = m + 1;
			} else {
				r = m - 1;
			}
		}

		if (init_pos == -1 || q(i, init_pos, pre_sum) != s) {
			continue;
		}

		ans = min(ans, n - (init_pos - i + 1));
	}

	if (ans == INT_MAX) {
		cout << -1 << endl;
	} else {
		cout << ans << endl;
	}

	// for (int i = 0; i < n; i++)
	// {
	// 	cout << pre_sum[i] << " ";
	// }

}


int main() {
	file_i_o();
	int t; cin >> t;

	while (t--) {

		solve();
	}
	return 0;
}
