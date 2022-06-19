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


// bool isDist(int arr[], int n)
// {
// 	for (int i = 0; i < n; i++)
// 	{
// 		if (arr[i] == arr[i + 1])
// 			return false;
// 	}

// 	return true;
// }





void solve() {

	int n; cin >> n;

	vector<int> arr(n);

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}


	//vector<int> ans;
	set<int> st;
	//sort(arr.begin(), arr.end());

	for (int i = 0; i < n; i++)
	{
		st.insert(arr[i]);
	}

	if (st.size() == n)
	{
		cout << n << endl;
	} else {
		if ((n - st.size()) & 1) {
			cout << st.size() - 1 << endl;
		} else {
			cout << st.size() << endl;
		}
	}
	// ump<int, int> mp;
	// int count = 0;

	// for (int i = 0; i < n; i++)
	// {
	// 	mp[arr[i]]++;
	// }

	// for (int i = 0; i < n; i++)
	// {
	// 	if (mp.find(arr[i]) != mp.end())
	// 	{
	// 		mp[arr[i]]--;
	// 	}

	// 	//mp.erase(arr[i]);
	// 	//count++;
	// }

	// for (auto it : mp)
	// {
	// 	cout << it.first << " ";
	// }
	// cout << endl;

	//cout << count << endl;
}


int main() {
	file_i_o();
	int t; cin >> t;

	while (t--) {

		solve();
	}
	return 0;
}
