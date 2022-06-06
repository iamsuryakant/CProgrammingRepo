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
	int t; cin >> t;

	while (t--) {
		int l, r; cin >> l >> r;
		int res = 0;
		bool flag = 0;



		// if (l % 2 == 0 && (r - l) >= 6) {

		// 	cout << l << " " << l + 2 << " " << l + 4 << " " << l + 6 << endl;

		// } else if (l % 2 != 0 && (r - l) >= 7) {
		// 	cout << l + 1 << " " << l + 3 << " " << l + 5 << " " << l + 7 << endl;
		// } else {
		// 	cout << -1 << endl;
		// }


		for (int i = l; i <= r; i++)
		{
			if ((i ^ (i + 1) ^ (i + 2) ^ (i + 3)) == 0 && (i + 3) <= r)
			{
				cout << i << " " << i + 1 << " " << i + 2 << " " << i + 3 << endl;
				flag = true;
				break;
			} else {
				if (res++ > 10)
					break;
			}
		}

		//cout<<res<<endl;

		if (flag == false)
		{
			cout << -1 << endl;
		}
	}

}


int main() {
	file_i_o();
	solve();
	return 0;
}
