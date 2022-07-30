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


int minMoves2(vector<int>& nums) {

	int n = nums.size();

	int incre_oper = 0, decre_oper = 0;

	sort(nums.begin(), nums.end());

	// for (int i = 0; i < n; i++)
	// {
	// 	cout << nums[i] << " ";
	// }

	// cout << endl;
	int l = 0, r = n - 1;
	int midd = nums[(l + r) >> 1];

	//return mid;

	for (int i = 0; i < n; i++)
	{
		incre_oper += abs(midd - nums[i]);
	}

	return incre_oper;
}


void solve() {

	int n; cin >> n;

	vector<int>nums(n);

	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
	}

	int ans = minMoves2(nums);

	cout << ans << endl;

}


int main() {
	file_i_o();
	int t; cin >> t;

	while (t--) {

		solve();
	}
	return 0;
}