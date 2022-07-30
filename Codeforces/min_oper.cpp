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

int maximum(vector<int> m)
{
	int maxi  = 0;

	for (int i = 0; i < m.size(); i++) {

		if (m[i] > maxi) {
			maxi  = i;
		}
	}

	return maxi;
}

int secondLargest(vector<int> m, int maxi) {

	int max2 = -1;
	int x = INT_MIN;
	for (int i = 0; i < m.size(); i++) {

		if ( max2 == -1 && m[i] > x && i != maxi)
			max2 = i;
		else if (max2 != -1 && m[i] > m[max2] && i != maxi)
			max2 = i;

	}
	return max2;
}






int min_oper(int n, vector<int> arr)
{

	unordered_map<int, int> mp;

	for (auto x : arr) {
		mp[x]++;
	}


	vector<int> m;

	for (auto x : mp)
	{
		m.push_back(x.second);

	}

	int maxi = maximum(m);
	int secondMax = secondLargest(m, maxi);



	if (m.size() == 1)
	{
		return m[0];
	}


	int ans = 0;
	int i1 = maxi, i2 = secondMax;
	while (m[i1] != 0)
	{
		if (m[i2] == 0)
		{
			ans += m[i1];
			m[i1] = 0;
		} else {
			ans += 1;
			m[i1] -= 1;
			m[i2] -= 1;
		}

		i1 = maximum(m), i2 = secondLargest(m, i1);
	}

	return ans;
}

void solve() {
	int n; cin >> n;

	vector<int> A(n);

	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}

	cout << min_oper(n, A) << endl;
}


int main() {
	file_i_o();
	// int t; cin>>t;

	// while(t--){

	solve();
	// }
	return 0;
}
