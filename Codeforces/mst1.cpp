const int N = 2e7 + 5;

int dp[N];

//top down approach
int steps(int n) {
	//base case
	if (n == 1) return 0;

	if (dp[n] != -1) return dp[n];

	// subproblems steps(n-1), step(n/2), steps(n/3)
	int ans = 1 + steps(n - 1);
	if (n % 2 == 0) {
		ans = min(ans, 1 + steps(n / 2));
	}
	if (n % 3 == 0) {
		ans = min(ans, 1 + steps(n / 3));
	}


	return dp[n] = ans;
}

int32_t main() {

	FIO;

	// memset(dp, -1, sizeof(dp));

	//bottom up approach
	dp[1] = 0;
	for (int i = 2; i <= 2e7; i++) {
		dp[i] = 1 + dp[i - 1];
		if (i % 2 == 0)
			dp[i] = min(dp[i], 1 + dp[i / 2]);
		if (i % 3 == 0)
			dp[i] = min(dp[i], 1 + dp[i / 3]);
	}

	int t; cin >> t; while (t--)
	{
		int i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
		cin >> n;

		// cout << steps(n) << "\n";





		cout << dp[n] << "\n";

	}
	return 0;
}