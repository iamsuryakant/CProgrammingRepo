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

const int n = 3;


void rotmat(int arr[n][n]) {

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++) {
			swap(arr[i][j], arr[j][i]);
		}
	}



	int j = 0;

	while (j < n) {
		int l = 0, h = n - 1;

		while (l < h) {
			swap(arr[l][j], arr[h][j]);
			l++;
			h--;
		}
		j = j + 1;


	}


	// for (int i = 0; i < n; i++)
	// {
	// 	// reverse(arr, arr + n);
	// 	int l = 0, h = n - 1;

	// 	while (l <= h) {
	// 		swap(arr[i][l], arr[i][h]);
	// 		l++;
	// 		h--;
	// 	}
	// }


	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << arr[j][i] << " ";
		}
		cout << endl;
	}
}




void solve() {

	// int n, m;
	// cin >> n >> m;

	int arr[n][n];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	rotmat(arr);

}


int main() {
	file_i_o();
	solve();
	return 0;
}
