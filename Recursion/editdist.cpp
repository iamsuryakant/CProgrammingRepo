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


int mini(string s1, string s2, int n, int m) {

	int dp[n + 1][m + 1];


	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			if (i == 0) {
				dp[i][j] = j;
			}
			else if (j == 0) {
				dp[i][j] = i;
			}
			else if (s1[i - 1] == s2[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1];
			} else {
				dp[i][j] = 1 + min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1]));
			}

		}
	}

	return dp[n][m];

	// if (dp[i] == 0)
	// 	return dp[];

	// if (m == 0)
	// 	return n;

	// if (dp[n][m] != -1)
	// {
	// 	return dp[n][m];
	// }

	// if (s1[n - 1] == s2[m - 1])
	// {
	// 	return dp[n][m] = mini(s1, s2, n - 1, m - 1, dp);
	// }

	// return dp[n][m] = 1 + min(mini(s1, s2, n - 1, m, dp), //insert
	//                           min(mini(s1, s2, n, m - 1, dp), // remove
	//                               mini(s1, s2, n - 1, m - 1, dp))); // replace

}



int minDistance(string word1, string word2) {

	int n = word1.length();
	int m = word2.length();

	//vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

	return mini(word1, word2, n, m);



}




void solve() {

	string s1, s2; cin >> s1 >> s2;

	cout << minDistance(s1, s2);

}


int main() {
	file_i_o();


	solve();
	return 0;
}
