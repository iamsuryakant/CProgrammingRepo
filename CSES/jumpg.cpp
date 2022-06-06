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


bool canJump(int ind, vector<int>& nums, int n) {

	if (n < 0) {
		return false;
	}

	if (n == 0) {
		return true;
	}

	n = n - nums[ind];
	canJump(ind + 1, nums, n);

	// for (int i = 0; i < n; i++)
	// {
	// 	canJump(nums , n - nums[i]);
	// }

	//return false;

}


void solve() {

	int n; cin >> n;

	vector<int>arr(n);

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << canJump(0, arr, n);

}


int main() {
	file_i_o();
	solve();
	return 0;
}
