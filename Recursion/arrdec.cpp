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

bool isEqual(int arr1[], int n, int arr2[]) {

	int b1 = arr1[0];
	int b2 = arr2[0];

	for (int i = 1; i < n; i++)
	{
		b1 ^= arr1[i];
	}

	for (int i = 1; i < n; i++)
	{
		b2 ^= arr1[i];
	}

	int all = b1 ^ b2;

	if (all == 0)
	{
		return true;
	} else {
		return false;
	}
}

// void oper(int arr1[], int n, int arr2[]) {

// 	int oper = 0;
// 	if (isEqual(arr1, n, arr2)) {
// 		cout << "YES" << endl;
// 	} else {
// 		for (int i = 0; i < n; i++)
// 		{
// 			arr1[i] = arr1[i] - 1;
// 		}
// 		oper++;
// 		oper(arr1, n, arr2);
// 	}

// 	if (oper) {
// 		cout << "YES" << endl;
// 	} else {
// 		cout << "NO" << endl;
// 	}
// }


void solve() {
	int t; cin >> t;

	while (t--) {
		int n; cin >> n;

		int arr1[n], arr2[n];

		for (int i = 0; i < n; i++)
		{
			cin >> arr1[i];
		}

		for (int i = 0; i < n; i++)
		{
			cin >> arr2[i];
		}

		sort(arr1, arr1 + n);
		sort(arr2, arr2 + n);

		int oper = 0;

		for (int i = 0; i < n; i++) {
			oper += abs(arr1[i] - arr2[i]);
		}

		cout << oper << endl;

		// if (oper) {
		// 	cout << "yES" << endl;
		// } else {
		// 	cout << "No" << endl;
		// }


	}

}


int main() {
	file_i_o();
	solve();
	return 0;
}
