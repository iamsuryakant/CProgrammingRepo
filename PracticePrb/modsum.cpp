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


ll modu(ll a, ll b) {
	// int mod(a, b) {
	return (((a % b) + b) % b);
}


void solve() {

	int t; cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;

		int arr[n];

		for (int i = 1; i <= n; i++)
		{
			cin >> arr[i];
		}

		ll max_value = 0;

		for (int i = 1; i <= n; i++)
		{
			ll oper = 0;
			for (int j = 1; j <= n; j++)
			{
				ll oper1 = (arr[i] - arr[j]);
				//cout << oper1 << " ";
				oper1 = modu(oper1, m);

				if (oper1 > 0)
				{

					// break;
				}
				else {

					oper1 = modu(oper1, m);

					oper = arr[i] + arr[j] + (oper1 % m);
				}

				max_value  = max(max_value, oper);

			}
		}

		cout << max_value << endl;

	}
}


int main() {
	file_i_o();
	solve();
	return 0;
}
