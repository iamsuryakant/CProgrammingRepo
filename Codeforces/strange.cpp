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

void solve() {

	int n, m; cin >> n >> m;

	vector<int>arr(n);

	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

		sum += arr[i];
	}

	//cout << sum << endl;

	vector<int>ans(n + m);

	// for (auto x : arr)
	// 	ans.push_back(x);

	for (int i = 0; i <= m; i++)
	{
		//
		ans[n + i] =  sum;
		sum = sum + 1;

	}



//	cout << sum << endl;

	cout << ans[(m + n) - 1] << endl;
	if (ans[(m + n) - 1] % 2 == 0)
		cout << "even" << endl;
	else
		cout << "odd" << endl;

}


int main() {
	file_i_o();
	int t; cin >> t;

	while (t--) {

		solve();
	}
	return 0;
}
