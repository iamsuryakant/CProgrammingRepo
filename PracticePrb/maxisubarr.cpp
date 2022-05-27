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

void subArrMax(int arr[], int n, int k)
{
	vector<int> v;
	int maxi = 0;

	for (int i = 0; i < k; i++) {
		v.push_back(arr[i]);
	}

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] > maxi)
		{
			maxi = v[i];
		}
	}

	cout << maxi << endl;

	//maxi = 0;

	for (int i = k; i <= n; i++)
	{
		int maxi = 0;
		v.push_back(arr[i]);
		//v.pop_back(arr[i - k]);

		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] > maxi)
			{
				maxi = v[i];
			}
		}

		cout << maxi << endl;
	}


}








void solve() {

	int n; cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int k; cin >> k;

	subArrMax(arr, n, k);

}


int main() {
	file_i_o();
	solve();
	return 0;
}
