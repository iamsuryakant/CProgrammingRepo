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

// void sieve(int n, vector<int>&prime) {

// 	vector<bool>mark(n + 1, true);

// 	if (n <= 1)
// 		mark[n] = false;

// 	prime.push_back(2);

// 	for (int i = 3; i <= n; i += 2)
// 	{
// 		if (mark[i]) {
// 			prime.pb(i);

// 			for (int j = i * i; j <= n; j += i)
// 				mark[i] = false;
// 		}
// 	}

// }

bool isprime(int n) //n = 5
{
	if (n <= 1)
		return false;

	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return false;
	}

	return true;
}

void solve() {

	int t; cin >> t;

	while (t--)
	{
		int n, m; cin >> n >> m;


		for (int i = n; i <= m; i++)
		{
			if (isprime(i))
				cout << i << endl;
		}
		cout << endl;
		// for (int i = n; i <= m; i++)
		// {
		// 	if (pr[i])
		// 		cout << i << endl;
		// }
		// cout << endl;
	}

}


int main() {
	file_i_o();
	solve();
	return 0;
}
