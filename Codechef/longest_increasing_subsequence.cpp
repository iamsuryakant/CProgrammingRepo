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

int lengthOfLIS(vector<int>& nums) {

	int n = nums.size();

	vector<int>dp(n, 0);

	dp[0] = 1;

	for (int i = 1; i < n; i++)
	{
		int max = 0;

		for (int j = 0; j < i; j++)
		{
			if (nums[j] < nums[i])
			{
				if (dp[j] > max) {
					max = dp[j];
				}
			}
		}

		dp[i] = max + 1;
	}


	return *max_element(dp.begin(), dp.end());
}





void solve() {

	int n; cin >> n;

	vector<int>nums(n);

	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
	}

	cout << lengthOfLIS(nums);
}


int main() {
	file_i_o();
	solve();
	return 0;
}
