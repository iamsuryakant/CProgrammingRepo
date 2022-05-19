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


// void sortArr(int arr[], int n) {
// 	int l = 0, r = n - 1, mid = 0;

// 	while (mid <= r) {
// 		switch (arr[mid]) {
// 		case 0:
// 			swap(arr[mid], arr[l]);
// 			mid++;
// 			l++;
// 			break;
// 		case 1:
// 			mid++;
// 			break;

// 		case 2:
// 			swap(arr[mid], arr[r]);
// 			r--;
// 			break;
// 		}

// 	}
// }


int intersection(int arr1[], int n, int arr2[], int m)
{
	unordered_set<int> s;

	for (int i = 0; i < n; i++)
		s.insert(arr1[i]);

	int res = 0;

	for (int i = 0; i < m; i++) {

		if (s.find(arr2[i]) != s.end()) {
			res++;
			s.erase(arr2[i]);
		}

	}
	return res;
}



void solve() {

	int n,  m;
	cin >> n >> m;

	int arr1[n];
	int arr2[m];

	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}

	for (int i = 0; i < m; i++)
	{
		cin >> arr2[i];
	}




	cout << intersection(arr1, n, arr2, m);
	// sortArr(arr, n);

	// for (int i = 0; i < n; i++)
	// {
	// 	cout << arr[i] << " ";
	// }

}


int main() {
	file_i_o();
	solve();
	return 0;
}
