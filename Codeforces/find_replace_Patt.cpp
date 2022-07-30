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








vector<string> findAndReplacePattern(vector<string>& words, string pattern) {

}

void solve() {

	int n; cin >> n;

	vector<string>words(n);

	for (int i = 0; i < n; i++)
	{
		cin >> words[i];
	}

	string pattern; cin >> pattern;

	map<char, int> mp;

	for (auto x : pattern) {
		mp[x]++;
	}

	vector<map<char, int> > mp1(n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			mp1[i][words[j]]++;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (auto x : mp1[i])
			cout << x.first << " " << x.second << endl;
	}



	// for (auto x : mp)
	// {
	// 	cout << x.first << " " << x.second << endl;
	// }

	// for (auto x : words)
	// 	cout << x << " ";

}


int main() {
	file_i_o();
	// int t; cin>>t;

	// while(t--){

	solve();
	// }
	return 0;
}
