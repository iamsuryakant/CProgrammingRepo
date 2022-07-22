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


vector<int> sieve(long long n) {

	vector<int>isprimes;
	vector<bool>mark(n + 1, true);
	mark[0] = false;
	mark[1] = false;

	for (int i = 2; i * i <= n; i++)
	{
		if (mark[i])
		{
			// isprimes.push_back(i);

			for (int j = i * i; j <= n; j += i)
			{
				mark[j] = false;
			}
		}
	}

	for (int i = 2; i <= n; i++)
	{
		if (mark[i])
		{
			isprimes.push_back(i);
		}
	}
	return isprimes;
}


void solve() {

	int n, m; cin >> n >> m;

	int N = 50;

	vector<int>primes = sieve(N);
	bool flag = false;

	for (int i = 0; i < primes.size() - 1; i++)
	{
		if (primes[i] == n && primes[i + 1] == m)
		{
			flag = true;
			break;
		}
	}

	if (flag)
	{
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

}


int main() {
	file_i_o();
	//int t; cin >> t;

	//while (t--) {

	solve();
	//}
	return 0;
}
