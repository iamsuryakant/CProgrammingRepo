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

void solve() {

	int n; cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + n);

	for (auto it : arr)
		cout << it << " ";

	cout << endl;

	sort(arr, arr + n, greater<int>());

	for (auto it : arr)
		cout << it << " ";

}


int main() {
	file_i_o();
	solve();
	return 0;
}
