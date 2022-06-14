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


void frequencyCount(vector<int>& arr, int n, int p)
{
	// code here

	map<int, int> mp;

	for (int i = 0; i < n; i++) {
		mp[i + 1] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		if (mp.find(arr[i]) != mp.end()) {
			mp[arr[i]]++;
		}
	}

	for (int i = 0; i < n; i++)
	{
		arr[i] = mp[i + 1];
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

}

void solve() {

	int n; cin >> n;

	vector<int>arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int p; cin >> p;

	frequencyCount(arr, n, p);
}


int main() {
	file_i_o();
	solve();
	return 0;
}
