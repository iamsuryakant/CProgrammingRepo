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

bool isSorted(vector<int>ans) {
	int n = ans.size();

	for (int i = 1; i <= n; i++)
	{
		if (ans[i] < ans[i - 1])
			return false;
	}

	return true;
}

// int count = 0;

void mids(vector<int>arr, int n, int &count) {

	vector<int> ans;

	int i = 1;
	for (i = 1; i <= n; i++)
	{
		if ((arr[i] > arr[i - 1]) && (arr[i - 1] < arr[i + 1]))  {
			ans.push_back(arr[i - 1]);
		} else {
			continue;
		}
	}

	ans.push_back(arr[i]);

	//i = 0;

	if (isSorted(ans)) {
		for (int i = 0; i < ans.size() - 1; i++)
		{
			cout << ans[i] << " ";
		}
		// cout << endl;
		// cout << count << endl;
	} else {
		//count++;
		mids(ans, ans.size(), count);
		//count++;
	}


}



void solve() {

	int n; cin >> n;

	vector<int>arr(n);

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int count = 0;

	mids(arr, n, count);

}


int main() {
	file_i_o();
	solve();
	return 0;
}
