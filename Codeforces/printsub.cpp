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


void printSub(int ind, int arr[], int n, vector<int>&ds)
{
	if (ind == n)
	{
		for (auto it : ds)
		{
			cout << it << " ";
		}
		if (ds.size() == 0)
		{
			cout << "{}";
		}
		cout << endl;
		return;
	}



	// picking condition

	ds.push_back(arr[ind]);
	printSub(ind + 1, arr, n, ds);
	ds.pop_back();

	// return;
	//not picking

	printSub(ind + 1, arr, n, ds);



	// picking condition



}


int main() {
	file_i_o();


	int n = 3;
	int arr[] = {1, 2, 3};
	//vector<char>s(n);

	// for (int i = 0; i < n; i++)
	// 	cin >> s[i];



	vector<int> ds;

	printSub(0, arr, n, ds);

	return 0;
}
