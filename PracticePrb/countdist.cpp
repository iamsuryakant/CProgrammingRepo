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



void countDist(int arr[], int n, int k) {
	// Creates an empty hashmap hm
	unordered_map<int, int> hm;

	// initialize distinct element count for current window
	int dist_count = 0;

	// Traverse the first window and store count
	// of every element in hash map
	for (int i = 0; i < k; i++) {
		if (hm[arr[i]] == 0) {
			dist_count++;
		}
		hm[arr[i]] += 1;
	}

	// Print count of first window
	cout << dist_count << endl;

	// Traverse through the remaining array
	for (int i = k; i < n; i++) {
		// Remove first element of previous window
		// If there was only one occurrence, then reduce distinct count.
		if (hm[arr[i - k]] == 1) {
			dist_count--;
		}
		// reduce count of the removed element
		hm[arr[i - k]] -= 1;

		// Add new element of current window
		// If this element appears first time,
		// increment distinct element count

		if (hm[arr[i]] == 0) {
			dist_count++;
		}
		hm[arr[i]] += 1;

		// Print count of current window
		cout << dist_count << endl;
	}
}

void solve() {

	int n; cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];


	int k; cin >> k;
	countDist(arr, n, k);

	// int sum; cin >> sum;

	// if (isSum(arr, n, sum)) {
	// 	cout << "Yes" << endl;
	// } else {
	// 	cout << "No" << endl;
	// }

}


int main() {
	file_i_o();
	solve();
	return 0;
}
