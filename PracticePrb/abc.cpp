#include<bits/stdc++.h>
using namespace std;

#define ll long long int

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

// #include<bits/stdc++.h>
// using namespace std;


ll gcd(ll a, ll b)
{
	if (b == 0)
		return a;
	return gcd(a, b % a);
}


ll fib(ll n, ll dp[])
{

	if (dp[n] != -1)
		return dp[n];



	if (n == 0)
	{
		return 0;
	}

	if (n == 1)
	{
		return 1;
	}


	return dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
}


void solve() {
	int t; cin >> t;

	while (t--)
	{
		ll m, n;

		cin >> m >> n;



		ll res = gcd(m, n);

		ll dp[res + 1];

		memset(dp, -1, sizeof(dp));

		cout << fib(res, dp) % 100 << endl;
	}
}


int main() {
	file_i_o();
	solve();
	return 0;
}


