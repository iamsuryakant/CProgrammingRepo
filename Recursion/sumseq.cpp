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

int max_sum = INT_MIN;

void solveseq(int ind, vector<int>arr, int n, vector<int>&ds, vector<int>&ans) {

	if (ind == n) {

		if (ds.size() != 0)
		{
			int sum = 0;
			for (auto it : ds) {
				sum += it;
			}

			if (sum > max_sum) {
				for (auto it : ds) {
					cout << it << " ";
				}

			}
			cout << endl;
			// ans.push_back(sum);
		}

		return;
	}


	ds.push_back(arr[ind]);
	solveseq(ind + 1, arr, n, ds, ans);
	ds.pop_back();

	solveseq(ind + 1, arr, n, ds, ans);

}


void solve() {

	int n; cin >> n;

	vector<int>arr(n);

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	vector<int> ds;

	vector<int>ans;
	solveseq(0, arr, n, ds, ans);

	//sort(ans.begin(), ans.end());

	// for (int i = 0; i < ans.size(); i++)
	// 	cout << ans[i] << " ";

	// for (int i = 0; i < ans.size(); i++)
	// {
	// 	for (int j = 0; j < ans[0].size(); j++)
	// 	{
	// 		cout << ans[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }



}


int main() {
	file_i_o();
	//int t; cin>>t;

	//while(t--){

	solve();
	//}
	return 0;
}

