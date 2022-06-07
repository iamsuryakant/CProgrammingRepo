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

string s[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};



void printkey(int ind, int n, string digits, vector<char>ans) {
	if (ind == n) {
		for (auto it : ans) {
			cout << it;
		}
		cout << endl;
		return;
	}

	int num = digits[ind] - '0';
	string nu = s[num];

	for (int i = 0; i < nu.length(); i++)
	{
		ans.push_back(nu[i]);
		printkey(ind + 1, n, digits, ans);
		ans.pop_back();
	}
}



void solve() {

	string digits;
	cin >> digits;

	int n = digits.length();

	vector<char> ans;

	if (n == 0) {
		cout << "";
	}

	//string out;

	printkey(0, n, digits, ans);




}


int main() {
	file_i_o();
	solve();
	return 0;
}
