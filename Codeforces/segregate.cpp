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

	int n; cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	//int pretem = arr[0];
	vector<int>ans;

	int l = 0;
	int r = n - 1;

	while (l <= r)
	{
		if (arr[l] % 2 != 0 && arr[r] % 2 != 0)
		{
			if (arr[l] < arr[r])
			{
				ans.push_back(arr[l]);
				l++;
			}
			else {
				ans.push_back(arr[r]);
				r--;
			}

			// l++;
			// r--;
		}
		else if (arr[l] % 2 == 0)
		{
			l++;
		}
		else if (arr[r] % 2 == 0) {
			r--;
		}

		//ans.push_back(arr[l]);


	}

	//sort(ans.begin(), ans.end());

	int s = 0, e = n - 1;

	while (s <= e)
	{
		if (arr[s] % 2 == 0 && arr[e] % 2 == 0)
		{
			if (arr[s] < arr[e])
			{
				ans.push_back(arr[s]);
				s++;
			}
			else {
				ans.push_back(arr[e]);
				e--;
			}

		}
		else if (arr[s] % 2 != 0 && arr[e] % 2 != 0)
		{
			s++;
			e--;
		}
		else if (arr[s] % 2 != 0 && arr[e] % 2 == 0)
		{
			s++;
		}
		else if (arr[e] % 2 != 0 && arr[s] % 2 == 0) {
			e--;
		}

		//ans.push_back(arr[l]);

	}


	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << " ";
	}

}


int main() {
	file_i_o();
	solve();
	return 0;
}
