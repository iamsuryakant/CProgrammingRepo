#include<bits/stdc++.h>


// Suryakant Thakur

using namespace std;


#define int              long long int
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

void solve() {

	int n; cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;

		arr[x] = i + 1;
	}

	// for (int i = 1; i <= n; i++)
	// {
	// 	cout << arr[i] << " ";
	// }

	int countl = 0, countr = 0;
	// int ansl = 0, ansr = 0;

	int m; cin >> m;

	while (m--)
	{
		int x; cin >> x;

		countl += arr[x];
		countr += n - arr[x] + 1;

		// ansr += (countr);
		// //cout << ansr + 1 << endl;

	}

	cout << countl << " " << countr << endl;

	//cout << abs(ansl - 1) << " " << ansr + 1 << endl;

}


int32_t main() {
	file_i_o();
	// int t; cin>>t;

	// while(t--){

	solve();
	// }
	return 0;
}
