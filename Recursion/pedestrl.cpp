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
	ll t; cin >> t;

	while (t--) {
		ll n; cin >> n;

		//vi ans;

		ll a = 0, b = 0, c = 0, on = 0;
		on = n;

		c = (n - 3) / 3;
		n = n - c;
		if (n & 1) {
			a = (n + 1) / 2;
			b = (n - 1) / 2;
		} else {
			a = (n + 2) / 2;
			b = on - (a + c);
		}

		cout << b << " " << a << " " << c << endl;



	}


	// for (int i = 0; i < ans.size(); i++)
	// {
	// 	if (ans[i] > ans[i + 1]) {
	// 		swap(ans[i], ans[i + 1]);
	// 		break;
	// 	}
	// }

	// ans.push_back(b);
	// ans.push_back(a);
	// ans.push_back(c);


	// for (int i = 0; i < ans.size(); i++)
	// {
	// 	cout << ans[i] << " ";
	// }
	// cout << endl;



}



int main() {
	file_i_o();
	solve();
	return 0;
}

// 6
// 10
// 100000
// 7
// 8