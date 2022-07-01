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

string UncommonChars(string A, string B)
{
	// code here
	set<char>s1;
	set<char>s2;

	string str = "";
	for (auto x : A) {
		s1.insert(x);
	}
	for (auto x : B) {
		s2.insert(x);
	}
	for (auto x : s1) {
		str.push_back(x);
	}
	for (auto x : s2) {
		str.push_back(x);
	}
	map<char, int>mp;
	for (int i = 0; i < str.size(); i++) {
		mp[str[i]]++;
	}
	string ans = "";
	for (auto x : mp) {
		if (x.second == 1) {
			ans.push_back(x.first);
		}
	}
	if (ans.size() == 0) return "-1";
	return ans;
}

void solve() {

	string a, b; cin >> a >> b;

	string ans = UncommonChars(a, b);

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
