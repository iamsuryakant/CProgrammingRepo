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

//using sliding window technique

bool isSum(int arr[], int n, int sum) {

	int s = 0, curr_sum = arr[0];

	for (int e = 1; e < n; e++)
	{
		//cleaning previous element

		while (curr_sum > sum && s < e - 1) {
			curr_sum -= arr[s];
			s++;
		}

		if (curr_sum == sum) {
			return true;
		} else {
			curr_sum += arr[e];
		}
	}

	return (curr_sum == sum);
}







void solve() {

	int n; cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int sum; cin >> sum;

	if (isSum(arr, n, sum)) {
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
