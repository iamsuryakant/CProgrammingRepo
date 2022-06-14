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


void permute(int idx, int n, vector<int>&arr, vector<vector<int>>&ans)
{
	if (idx == n)
	{
		ans.push_back(arr);
		return;
	}

	for (int i = idx; i < n; i++)
	{
		swap(arr[idx], arr[i]);
		permute(idx + 1, n, arr, ans);
		swap(arr[idx], arr[i]);
	}
}






void solve() {

	int t; cin >> t;

	while (t--) {


		int n; cin >> n;

		vector<int>arr(n);

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		if (n == 1) {
			cout << -1 << endl;
		}

		vector<vector<int>> ans;
		vector<int>ds;

		permute(0, n, arr, ans);

		sort(ans.begin(), ans.end());

		for (int i = 0; i < ans.size(); i++)
		{
			//int k = i;
			for (int j = 0; j < ans[0].size(); j++) {
				int k
				if (arr[j] == ans[i][j]) {
					continue;
				} else {
					cout << ans[i][j] << " ";
				}
			}
			cout << endl;
			//break;
		}
	}
	//cout << endl;

}


int main() {
	file_i_o();
	solve();
	return 0;
}
