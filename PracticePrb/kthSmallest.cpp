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

int lpartition(int arr[], int l, int r) {
	int pivot = arr[r]; // always last

	int i = l - 1;

	for (int j = l; j <= r - 1; j++)
	{
		if (arr[j] < pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}

	swap(arr[i + 1], arr[r]);
	return (i + 1);
}

int kthsmallest(int arr[], int n, int k) {

	int l = 0, r = n - 1;

	while (l <= r) {
		int pivot = lpartition(arr, l, r);

		if (pivot == k - 1) {
			return arr[pivot];
		}
		else if (pivot > k - 1) {
			r = pivot - 1;
		}
		else {
			l = pivot + 1;
		}
	}
	return -1;
}







void solve() {
	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int k; cin >> k;

	cout << kthsmallest(arr, n, k);

}


int main() {
	file_i_o();
	solve();
	return 0;
}
