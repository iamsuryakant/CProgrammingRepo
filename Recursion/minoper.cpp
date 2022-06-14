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

int minOperations(vector<int>& nums, int x) {

	int target = -x;
	for (int i : nums)
	{
		target += i;
	}

	if (target < 0) {
		return -1;
	}


	int j = 0;
	int sum = 0;
	int ans = INT_MIN;
	int n = nums.size();
	for (int i = 0; i < n; i++)
	{
		sum += nums[i];
		while (sum > target)
		{
			sum -= nums[j];
			j++;
		}
		if (sum == target)
		{
			ans = max(ans, i - j + 1);
		}
	}
	return ans == INT_MIN ? -1 : n - ans;
}


void solve() {

	int n; cin >> n;

	vector<int>arr(n);

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int x; cin >> x;
	cout << minOperations(arr, x);
}


int main() {
	file_i_o();
	solve();
	return 0;
}
