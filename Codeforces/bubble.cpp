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


// void bubble(int arr[], int n, int &count)
// {
// 	if (n == 1 || n == 0)
// 		return;

// 	for (int i = 0; i < n; i++)
// 	{
// 		if (arr[i] > arr[i + 1])
// 		{
// 			swap(arr[i], arr[i + 1]);
// 			count++;
// 		}
// 	}

// 	bubble(arr, n - 1, count);

// }


void bubble(int arr[], int n)
{
	int i, j, count = 0;
	for (i = 0; i < n - 1; i++) {

		// Last i elements are already
		// in place
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				count++;
			}
		}
	}

	cout << count << endl;
}

// void bubble(int arr[], int i, int j, int n)
// {

// 	// if (n == 1)
// 	// 	return;

// 	if (i >= n - 1 && j >= n - 1 - i)
// 		return;
// 	if (j >= n - 1 - i) {
// 		bubble(arr, i + 1, 0, n);
// 		return;
// 	}

// 	if (arr[j] > arr[j + 1]) {
// 		int t = arr[j];
// 		arr[j] = arr[j + 1];
// 		arr[j + 1] = t;
// 	}
// 	bubble(arr, i, j + 1, n);
// }


//8



void solve() {
	int n; cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	//int count = 0;

	bubble(arr, n);

	//cout << count << endl;
	// for (int i = 0; i < n; i++)
	// 	cout << arr[i] << " ";
}


int main() {
	file_i_o();
	solve();
	return 0;
}












