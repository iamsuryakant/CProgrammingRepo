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


void paths(int i, int j, int n, int m,  vector<vector<int>> &grid, vector<vector<int>>&ans, vector<int>&ds ) {

	if (i < 0 || i >= n || j < 0 || j >= m) return;

	if (i == n - 1 && j == m - 1)
	{
		ds.push_back(grid[i][j]);
		ans.push_back(ds);
		return;
	}



	ds.push_back(grid[i][j]);

	if (i < n - 1) {
		paths(i + 1, j, n, m, grid, ans, ds);
		ds.pop_back();
	}

	if (j < m - 1) {
		paths(i, j + 1, n, m, grid, ans, ds);
		ds.pop_back();
	}




}

void findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
{
	// code here
	vector<vector<int>>ans;

	vector<int>ds;

	paths(0, 0, n, m, grid, ans, ds);


	for (int i = 0; i < ans.size(); i++)
	{
		for (int j = 0; j < ans[0].size(); j++)
		{
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}


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


	findAllPossiblePaths(n, m, matrix);



}


int main() {
	file_i_o();
	solve();
	return 0;
}
