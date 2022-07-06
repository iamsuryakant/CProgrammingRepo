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


int f(int day, int last, vector<vector<int>> &points, vector<vector<int>> &dp) {

	if (dp[day][last] != -1) return dp[day][last];

	if (day == 0) {
		int maxi = 0;
		for (int i = 0; i <= 2; i++) {
			if (i != last)
				maxi = max(maxi, points[0][i]);
		}
		return dp[day][last] = maxi;
	}

	int maxi = 0;
	for (int i = 0; i <= 2; i++) {
		if (i != last) {
			int activity = points[day][i] + f(day - 1, i, points, dp);
			maxi = max(maxi, activity);
		}

	}

	return dp[day][last] = maxi;
}

int solveTab(int n, vector<vector<int>>&points) {

	vector<vector<int>>dp(n, vector<int>(4, 0));

	dp[0][0] = max(points[0][1], points[0][2]);
	dp[0][1] = max(points[0][0], points[0][2]);
	dp[0][2] = max(points[0][0], points[0][1]);
	dp[0][3] = max(points[0][0], max(points[0][1], points[0][2]));

	for (int day = 1; day < n; day++) {
		for (int last = 0; last < 4; last++)
		{
			dp[day][last] = 0;

			for (int task = 0; task <= 2; task++) {
				if (task != last) {
					int point = points[day][task] + dp[day - 1][task];
					dp[day][last] = max(dp[day][last], point);
				}
			}
		}
	}

	return dp[n - 1][3];
}



void solve() {

	int n; cin >> n;

	vector<vector<int>> a(n, vector<int>(4));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= 2; j++) {
			cin >> a[i][j];
		}
	}

	vector<vector<int>> dp(n, vector<int>(4, -1));

	//cout << f(n - 1, 3, a, dp);
	cout << solveTab(n, a);
	//return 0;

}


int main() {
	file_i_o();
	//int t; cin >> t;

	//while (t--) {

	solve();
//	}
	return 0;
}
