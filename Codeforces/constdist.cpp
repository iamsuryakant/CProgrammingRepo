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

void solve() {

	int n, k; cin >> n >> k;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	vector<int> ans;

	unordered_map<int, int> mp;

	int count = 0;
	int sum = 0;


	for (int i = 0; i < k; i++)
	{
		if (mp[arr[i]] == 0) {
			count++;
		}

		mp[arr[i]]++;
	}

	//sum += count;

	ans.push_back(count);

	for (int i = k; i < n; i++)
	{
		if (mp[arr[i - k]] == 1) {
			count--;
		}

		mp[arr[i - k]]--;

		if (mp[arr[i]] == 0) {
			count++;
		}
		mp[arr[i]]++;

		sum += count;

		ans.push_back(count);
	}

	//cout << sum - 1 << endl;

	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";



}


int main() {
	file_i_o();
	solve();
	return 0;
}
