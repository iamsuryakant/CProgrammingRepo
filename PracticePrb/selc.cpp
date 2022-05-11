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

/*
//bubble sort

void bubbleSort(int arr[], int n) {

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

}

*/

/*

//Selection Sort

void SelectionSort(int arr[], int n) {


	for (int i = 0; i < n - 1; i++)
	{
		int min_idx = i;

		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min_idx])
			{
				min_idx = j;
			}
		}
		swap(arr[min_idx], arr[i]);
	}


	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

*/


/*

// Insertion Sort

void Insertion(int arr[], int n) {

	for (int i = 1; i < n; i++)
	{
		int key = arr[i];
		int j = i - 1;


		while (j >= 0 && arr[j] > key ) {
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = key;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

*/




/*

// Merge Sort



void merge(int arr[], int l, int m, int r) {

	int n1 = m - l + 1, n2 = r - m;

	int left[n1], right[n2];

	for (int i = 0; i < n1; i++) {
		left[i] = arr[l + i];
	}

	for (int j = 0; j < n2; j++) {
		right[j] = arr[m + 1 + j];
	}

	int i = 0, j = 0, k = l;

	while (i < n1 && j < n2) {
		if (left[i] <= right[j]) {
			arr[k++] = left[i++];
		} else {
			arr[k++] = right[j++];
		}
	}

	while (i < n1) {
		arr[k++] = left[i++];
	}

	while (j < n2) {
		arr[k++] = right[j++];
	}
}



void mergeSort(int arr[], int l, int r) {

	if (l < r) {

		int m = (l + r) / 2;

		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
	}

}

*/





void solve() {
	int n; cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	mergeSort(arr, 0, n - 1);

	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout << arr[i] << " ";
	}

}


int main() {
	file_i_o();
	solve();
	return 0;
}
