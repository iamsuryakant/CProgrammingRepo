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


int firstMissingPositive(vector<int>& A) {

	int n = A.size();

	int i = 0;

	while (i < n) {
		if (A[i] > 0 && A[i] <= n && A[A[i] - 1] != A[i])
		{
			swap(A[i], A[A[i] - 1]);
		} else {
			i++;
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (A[i] != i + 1)
		{
			return i + 1;
		}
	}

	return n + 1;

}


void solve() {

	int n, m, k; cin >> n >> m >> k;

	vector<int>arr(n);

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	int miss = 0;

	//int count[n] = {0};
	int c = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == k) {
			c++;
		}
	}

	for (int i = 0; i < m + c; i++)
	{
		if (arr[i] == k && c > 0)
		{
			c--;
		} else if (arr[i] == miss) {
			miss++;
		}
	}

	if (miss == k)
	{
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}


int main() {
	file_i_o();
	int t; cin >> t;

	while (t--) {

		solve();
	}
	return 0;
}
