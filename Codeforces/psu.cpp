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
#define floop(i,a,b)    for(ll i = (a); i <= (b); i++)
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

	ll t; cin >> t;

	while (t--) {

		ll n; cin >> n;

		ll arr[n];

		floop(i, 1, n)
		{
			cin >> arr[i];
		}

		ll arr1[n];

		floop(i, 1, n)
		{
			arr1[i] = arr[i];
		}

		sort(arr1, arr1 + n);
		ll cnt  = 0;
		ll imp = 0;

		while (imp <= n - 1) // 1 3 2 3    1 2 3 3
		{
			if (arr[imp] != arr1[imp])
			{
				if ((arr[imp + 1] == arr1[imp]) && (arr1[imp + 1] == arr[imp])) {
					cnt++; // count swaps
					imp++;
				}
				else {
					cnt = cnt + 2;
					break;
				}
			}
			imp++;
		}

		if (cnt <= 1)
		{
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}


int main() {
	file_i_o();
	solve();
	return 0;
}
