/// n = 3  l = 0  r = 1, // odd

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


void solverpermodd(vector<int>arr, int n, vector<int>&ds, vector<int>&ans, vector<int>freq, int l, int r) {

	if (ds.size() == n)
	{
		int sum = 0;

		// for (auto it : ds) {
		// 	cout << it << " ";
		// }
		// cout << endl;

		for (int i = l; i <= r; i++)
		{
			sum += ds[i];
		}

		if (sum & 1)
		{
			ans.push_back(sum);
		}

		return;
	}

	for (int i = 0; i < n; i++)
	{
		if (!freq[i]) {
			freq[i] = 1;
			ds.push_back(arr[i]);
			solverpermodd(arr, n, ds, ans, freq, l, r);
			ds.pop_back();
			freq[i] = 0;

		}

	}
}



void solve() {

	int n; cin >> n;
	int l, r; cin >> l >> r;

	vector<int>arr(n);

	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}

	// for (int i = 0; i < n; i++)
	// {
	// 	cout << arr[i] << " ";
	// }


	vector<int>freq(n, 0);

	vector<int>ds;
	vector<int>ans;

	solverpermodd(arr, n, ds, ans, freq, l, r);

	for (auto it : ans)
	{
		cout << it << " ";
	}
	cout << endl;


}


int main() {
	file_i_o();
	//int t; cin>>t;

	// while(t--){

	solve();
	// }
	return 0;
}
