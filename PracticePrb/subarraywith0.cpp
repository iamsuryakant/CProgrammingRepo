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

bool isSubarr(int arr[], int n) {

	unordered_set<int> s;

	int pre_sum = 0;

	for (int i = 0; i < n; i++) {
		pre_sum += arr[i];

		if (s.find(pre_sum) != s.end()) {
			return true;
		}

		if (pre_sum == 0)
			return true;

		s.insert(pre_sum);
	}

	return false;

}



void solve() {

	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	if (isSubarr(arr, n)) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

}


int main() {
	file_i_o();
	solve();
	return 0;
}
