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

bool issorted(ll arr[], ll n)
{
	if (n == 1 || n == 0)
		return 1;
	if (arr[n - 1] < arr[n - 2])
		return 0;
	return issorted(arr, n - 1);
}

void solve() {

	ll t; cin >> t;

	while (t--) {

		ll n; cin >> n;

		ll arr[n];

		for (ll i = 0; i < n; i++)
		{
			cin >> arr[i];
		}


		ll cnt = 0;
		//ll count = 0;
		bool swapped = false;

		if (issorted(arr, n))
		{
			cout << "YES" << endl;
			//break;
		}

		else {

			for (ll i = 1; i <= n - 1 ; i++)
			{
				if (arr[i - 1] > arr[i])
				{
					swap(arr[i], arr[i - 1]);
					//count++;
					swapped = true;
					break;
				}

			}

			if (issorted(arr, n) && swapped == true)
			{
				cnt = cnt + 1;
			}
			else {
				cnt = cnt + 2;
			}

			//cout << cnt << endl;
			if (cnt < 2)
			{
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}

		//cout << count << endl;
	}

}


int main() {
	file_i_o();
	solve();
	return 0;
}
