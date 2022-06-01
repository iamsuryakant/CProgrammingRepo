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


void permute(int n, int arr[], vector<vector<int>>&ans, vector<int>&ds, int freq[])
{
	if (ds.size() == n)
	{
		ans.push_back(ds);
		return;
	}

	for (int i = 0; i < n; i++)
	{

		if (!freq[i]) {
			ds.push_back(arr[i]);
			freq[i] = 1;
			permute(n, arr, ans, ds, freq);
			ds.pop_back();
			freq[i] = 0;
		}
	}
}



void solve() {

	int n; cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int freq[n] = {0};

	vector<vector<int>> ans;
	vector<int>ds;

	permute(n, arr, ans, ds, freq);

	for (int i = 0; i < ans.size(); i++)
	{
		for (int j = 0; j < ans[0].size(); j++) {
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

}


int main() {
	file_i_o();
	solve();
	return 0;
}
