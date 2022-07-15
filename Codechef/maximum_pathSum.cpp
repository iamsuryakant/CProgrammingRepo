#include<bits/stdc++.h>
using namespace std;

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

int solverec(int i , int j, int n, int m, vector<vector<int>> &matrix, vector<vector<int>> &dp) {

	//base case

	if (j < 0 || j >= m)
	{
		return -1e9;
	}

	if (i == 0) {
		return matrix[0][j];
	}

	if (dp[i][j] != -1)
		return dp[i][j];



	int up = matrix[i][j] + solverec(i - 1, j, n, m, matrix, dp);
	int leftdia = matrix[i][j] + solverec(i - 1, j - 1, n, m, matrix, dp);
	int rightdia = matrix[i][j] + solverec(i - 1, j + 1, n, m, matrix, dp);

	return dp[i][j] = max(up, max(leftdia, rightdia));
}



int getMaxPathSum(vector<vector<int>> &matrix)
{
	//  Write your code here.
	int n = matrix.size();
	int m = matrix[0].size();

	vector<vector<int>>dp(n, vector<int>(m, 0));


	for (int j = 0; j < m; j++)
	{
		dp[0][j] = matrix[0][j];
	}

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int up = matrix[i][j] + dp[i - 1][j];

			int leftdia = matrix[i][j];
			if (j - 1 >= 0)
				leftdia += dp[i - 1][j - 1];
			else
				leftdia += -1e9;

			int rightdia = matrix[i][j];
			if (j + 1 < m)
				rightdia += dp[i - 1][j + 1];
			else
				rightdia += -1e9;

			dp[i][j] = max(up, max(leftdia, rightdia));
		}
	}






	int maxi = -1e9;


	for (int j = 0; j < m; j++)
	{
		maxi = max(maxi, dp[n - 1][j]);
	}

	return maxi;

}

void solve() {

	int n, m; cin >> n >> m;

	vector<vector<int>>matrix(n, vector<int>(m));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}

	// for (int i = 0; i < n; i++)
	// {
	// 	for (int j = 0; j < m; j++)
	// 	{
	// 		cout << matrix[i][j] << " ";
	// 	}

	// 	cout << endl;
	// }

	cout << getMaxPathSum(matrix);

}


int main() {
	file_i_o();
	solve();
	return 0;
}
