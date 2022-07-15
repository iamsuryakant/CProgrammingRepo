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

void data_up(int n, int k, int data[], vector<vector<int>>updates) {

	vector<int>nums = updates[0];

	for (auto x : nums) {
		cout << x << " ";
	}

}






void solve() {

	int n; cin >> n;

	int data[n];

	for (int i = 0; i < n; i++)
	{
		cin >> data[i];
	}

	vector<vector<int>>updates = {{2, 4}, {1, 2}};

	int k; cin >> k;

	data_up(n, k, data, updates);

}


int main() {
	file_i_o();
	solve();
	return 0;
}
