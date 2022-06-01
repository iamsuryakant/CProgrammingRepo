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

vector<int> runninS(vector<int>&arr) {

	int n = arr.size();

	for (int i = 1; i < n; i++)
		arr[i] += arr[i - 1];

	return arr;



	// int n = arr.size();
	// vector<int> ans(n);
	// for (int i = 1; i <= n; i++)
	// {
	// 	int sum = 0;
	// 	for (int j = 0; j < i; j++)
	// 	{
	// 		sum += arr[j];
	// 	}
	// 	ans[i - 1] = sum;
	// }


	// for (int i = 0; i < n; i++)
	// {
	// 	arr[i] = ans[i];
	// }

	// return arr;

}



void solve() {
	int n; cin >> n;

	vector<int>arr(n);

	for (int i = 0; i < n; i++)
		cin >> arr[i];


	// for (int i = 0; i < n; i++)
	// 	cout << arr[i] << " ";

	runninS(arr);


	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}


int main() {
	file_i_o();
	solve();
	return 0;
}
