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


void countch(string s) {
	int c1 = 0, c2 = 0, c3 = 0, c4 = 0;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			c1++; //numbers
		}
		else if (s[i] >= 65 && s[i] <= 90) {
			c2++; // upper case
		}
		else if (s[i] >= 97 && s[i] <= 122)
		{
			c3++; //lower case
		}
		else {
			c4++; //special characters
		}
	}

	cout << c1 << " " << c2 << " " << c3 << " " << c4 << endl;


}


void solve() {

	string s; cin >> s;

	countch(s);

}


int main() {
	file_i_o();
	solve();
	return 0;
}


