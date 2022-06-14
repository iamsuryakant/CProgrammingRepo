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


void combi(int ind, int n, vector<int> A, int B, vector<int>&ds) {

	if (ind == n) {
		if (B == 0) {
			for (auto it : ds) {
				cout << it << " ";
			}
			cout << endl;
		}
		return;
	}

	if (A[ind] <= B) {
		//picking condition

		ds.push_back(A[ind]);
		combi(ind, n, A, B - A[ind], ds);
		ds.pop_back();
	}

	//non picking

	combi(ind + 1, n, A, B, ds);

}


void combinationSum(vector<int> &A, int B) {
	// Your code here

	int n = A.size();

	//vector<vector<int>>ans;

	vector<int>ds;

	combi(0, n, A, B, ds);

}




void solve() {

	int n; cin >> n;

	vector<int>A(n);

	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}

	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}


	int B; cin >> B;

	combinationSum(A, B);

	// for (int i = 0; i < ans.size(); i++) {
	// 	for (int j = 0; j < ans[0].size(); j++) {
	// 		cout << ans[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

}


int main() {
	file_i_o();
	solve();
	return 0;
}
