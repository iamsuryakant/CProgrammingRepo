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


vector<int> seive(long long n) {

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

	int t; cin >> t;

	while (t--) {

		int L, R;
		cin >> L >> R;

		long long ans = 1;
		vector<bool>primes(R - L + 1, true);
		vector<int>isprimes = seive(sqrt(R));
		// seive(sqrt(R), isprimes);

		for (auto p : isprimes)
		{
			int st = (L / p) * p;
			// st *= p;

			if (st < L) st += p;

			//int newp = max(st, p*p);
			for (int i = max(p * p, st) ; i <= R; i += p)
			{
				// if(i < L) continue;
				primes[i - L] = false;
			}
		}

		for (int i = L; i <= R; i++) {
			if (i == 1) continue;

			if (primes[i - L])
			{
				// ans = (ans * i) % mod;
				cout << i << endl;
			}

		}
		//cout << ans << endl;

		//return ans;
	}

}


int main() {
	file_i_o();
	solve();
	return 0;
}
