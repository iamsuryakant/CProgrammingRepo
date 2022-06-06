#include<bits/stdc++.h>


// Suryakant Thakur

using namespace std;


#define ll              long long int
#define ld              long double
#define mod             1000000007
#define inf             1e18
#define endl            "\n"
#define pb              push_back
#define vi              vector<ll>
#define vs              vector<string>
#define pii             pair<ll,ll>
#define ump             unordered_map
#define mp              map
#define ps(x, y)        fixed<<setprecision(y)<<x
#define pq_max          priority_queue<ll>                                  // max heap
#define pq_min          priority_queue<ll,vi,greater<ll> >                  // min heap
#define fi              first
#define sec             second
#define mid(l,r)        (l+(r-l)/2)
#define floop(i,a,b)    for(int i = (a); i <= (b); i++)
#define rloop(i,a,b)    for(int i = (a); i >= (b); i--)


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


// void rev(int arr[], int l, int h) {

// 	while ( l <= h) {
// 		swap(arr[l], arr[h]);
// 		l++;
// 		h--;
// 	}
// }


// void rightrota(int arr[], int n, int k) {
// 	if (k < 0 || k >= n) {
// 		return;
// 	}

// 	rev(arr, n - k, n - 1);
// 	rev(arr, 0, n - k - 1);
// 	rev(arr, 0, n - 1);
// }





void solve() {
	int t; cin >> t;

	while (t--) {
		int n; cin >> n;

		int arr[n];

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}


		int maxi = INT_MIN;
		int sum = 0;
		if (n == 1)
		{
			cout << arr[0] << endl;
		} else if (n == 2) {
			cout << arr[0] + arr[1] << endl;
		} else {
			maxi = arr[0] + arr[n - 1];

			for (int i = 0; i < n - 1; i++)
			{
				sum = arr[i] + arr[i + 1];

				maxi = max(maxi, sum);
			}

			cout << maxi << endl;

		}


		// for (int i = 0; i < n; i++)
		// {
		// 	rightrota(arr, n, i);
		// 	for (int i = 0; i < n; i++)
		// 	{
		// 		cout << arr[i] << " ";
		// 	}
		// 	cout << endl;
		// 	maxi = max(maxi, (arr[0] + arr[n - 1]));
		// }

		// if (n == 1)
		// {
		// 	cout << arr[0] << endl;
		// } else if (n == 2)
		// {
		// 	cout << (arr[0] + arr[1]) << endl;
		// } else {


		// }




	}

}


int main() {
	file_i_o();
	solve();
	return 0;
}


// 3
// 2
// 5 8
// 3
// 5 10 15
// 4
// 4 4 4 4
