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

void longest(int n, string s, string &ans) {

	unordered_map<char, int>mp;

	// int i = 0;
	// while (i < n) {

	// 	if (mp.find(s[i]) != mp.end()) {
	// 		ans = "";
	// 		mp[s[i]]--;
	// 		//continue;
	// 	} else {
	// 		mp[s[i]]++;
	// 		ans += s[i];
	// 		i++;
	// 	}

	// 	//cout << ans << endl;
	// }



	for (int i = 0; i < n; i++)
	{
		if (mp.find(s[i]) != mp.end()) {
			//ans = "";
			mp[s[i]]--;
			continue;
		} else {
			mp[s[i]]++;
			ans += s[i];
		}
	}

	cout << ans << endl;


}



void solve() {

	string s; cin >> s;

	int n = s.length();

	//int count = 0;

	string ans = "";

	if (n == 0) {
		cout << ans << endl;
	}

	longest(n, s, ans);



}


int main() {
	file_i_o();
	solve();
	return 0;
}
