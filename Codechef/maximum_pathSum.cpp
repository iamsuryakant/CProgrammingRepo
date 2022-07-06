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

int getMaxPathSum(vector<vector<int>> &matrix)
{
	//  Write your code here.
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

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << matrix[i][j] << " ";
		}

		cout << endl;
	}

	//cout << getMaxPathSum(matrix);

}


int main() {
	file_i_o();
	solve();
	return 0;
}
