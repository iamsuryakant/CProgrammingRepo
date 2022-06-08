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


/*------------------------------Not completed----------------------------------*/

bool isPalindrom(string s) {
	int l = 0, r = s.length() - 1;

	while (l < r) {

		if (s[l] != s[r])
			return false;

		l++;
		r--;
	}

	return true;
}

void subseq(int ind, int n, string s, string &ans, string &count) {

	if (ind == n) {

		for (auto x : ans) {
			cout << x << " ";
		}
		cout << endl;

		return;
	}

	//non picking

	subseq(ind + 1, n, s, ans, count);


	ans.push_back(s[ind]);
	subseq(ind + 1, n, s, ans, count);
	ans.pop_back();
}



void solve() {

	string s; cin >> s;

	int n = s.length();

	string ans;
	int count = 0;

	if (isPalindrom(s)) {
		cout << 1 << endl;
	} else {
		subseq(0, n, s, ans, count);
	}

}


int main() {
	file_i_o();
	solve();
	return 0;
}


