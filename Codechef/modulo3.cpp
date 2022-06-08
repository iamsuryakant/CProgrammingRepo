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
		int a, b; cin >> a >> b;

		int count = 0;

		if (a % 3 == 0 || b % 3 == 0) {
			cout << 0 << endl;
		} else {

			while (a % 3 != 0 && b % 3 != 0) {
				if (a > b) {
					a = abs(a - b);
				} else {
					b = abs(a - b);
				}
				count++;
			}

			cout << count << endl;
		}
	}

}


int main() {
	file_i_o();
	solve();
	return 0;
}
