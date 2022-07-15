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

	int n; cin >> n;

	string s; cin >> s;

	//int vis[26] = {0};
	int ballons = 0;

	// for (auto x : vis) {
	// 	cout << x << " ";
	// }

	map<char, int> vis;

	for (int i = 0; i < n; i++)
	{
		if (vis[s[i]] == 0)
		{
			ballons += 2;
			vis[s[i]] = 1;
		} else {
			ballons += 1;
		}
	}


	// for (auto x : vis) {
	// 	cout << x.first << " " << x.second << endl;
	// }

	cout << ballons << endl;
}


int main() {
	file_i_o();
	int t; cin >> t;

	while (t--) {

		solve();
	}
	return 0;
}
