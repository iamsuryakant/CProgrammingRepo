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

const int N = 8;

void solve() {

	vector<vector<char>>arr(N, vector<char>(N));

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> arr[i][j];
		}
	}



	for (int i = 1; i < N; i++)
	{
		for (int j = 1; j < N; j++)
		{
			if (arr[i][j] == '#' && arr[i - 1][j - 1] == '#' && arr[i - 1][j + 1] == '#'
			        && arr[i + 1][j - 1] == '#' && arr[i + 1][j + 1] == '#') {
				cout << i + 1 << " " << j + 1 << endl;
				return;
			}

		}
	}

	// for (int i = 0; i < N; i++)
	// {
	// 	for (int j = 0; j < N; j++)
	// 	{
	// 		cout << arr[i][j];
	// 	}
	// 	cout << endl;
	// }

}


int main() {
	file_i_o();
	int t; cin >> t;

	while (t--) {

		solve();
	}
	return 0;
}
