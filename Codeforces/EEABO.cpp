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

bool isSame(int arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
		if (arr[i] != arr[i - 1]) {
			return false;
		}
	}
	return true;
}


void pro(int arr[], int n, int sum) {

	for (int i = 0; i < n; i++)
	{
		if ((sum - arr[i]) == (arr[i] * (n - 1)))
		{
			cout << "YES" << endl;
			return;
		}
	}

	cout << "NO" << endl;
}



void solve() {

	int t; cin >> t;

	while (t--)
	{
		int n; cin >> n;

		int arr[n];
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];

			sum += arr[i];
		}

		//cout << sum << endl;

		// for (int i = 0; i < n; i++)
		// {
		// 	cout << arr[i] << endl;
		// }

		pro(arr, n, sum);

	}

}


int main() {
	file_i_o();
	solve();
	return 0;
}




// 5
// 1 2 3 4 5
// 4
// 4 3 2 1
// 3
// 24 2 22