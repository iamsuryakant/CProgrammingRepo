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
#define floop(i,a,b)    for(int i = (a); i < (b); i++)
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

	int arr[7];

	floop(i, 0, 7)
	{
		cin >> arr[i];
	}

	int sum = 0;
	int ans = 0;
	int i = 0;

	for (; i < 7; i = (i + 1) % 7)
	{
		sum += arr[i];

		if (sum >= n)
		{
			// ans = i + 1;
			break;
		}

	}
	cout << (i + 1) << endl;


}


int main() {
	file_i_o();
	// int t; cin >> t;

	// while (t--) {

	solve();
	// }
	return 0;
}
