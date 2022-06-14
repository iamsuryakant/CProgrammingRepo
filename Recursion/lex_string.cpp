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

	int t; cin >> t;

	while (t--) {
		int a, b, k;
		cin >> a >> b >> k;

		string s; cin >> s;
		string s1; cin >> s1;

		string c;

		sort(s.begin(), s.end(), greater<char>());
		sort(s1.begin(), s1.end(), greater<char>());

		// cout << s << " " << s1 << endl;

		// c += s.substr(0, k);
		// s = s.erase(0, k);
		// s1 = s1.erase(s1[0]);
		// cout << s1 << endl;

		int i = 0, j = 0;

		while (s.empty() == false && s1.empty() == false) {

			bool g = s1.back() < s.back();
			if (g && j == k)
				g = 0;

			if (!g && i == k)
				g = 1;

			if (g) {
				c.push_back(s1.back());
				j++;
				i = 0;
				s1.pop_back();
			} else {
				c.push_back(s.back());
				i++;
				j = 0;
				s.pop_back();
			}
		}


		cout << c << endl;



	}
}


int main() {
	file_i_o();
	solve();
	return 0;
}


// 5 9 3
// caaca
// bedededeb
// 7 7 1
// noskill
// wxhtzdy
// 6 4 2
// aaaaaa
// bbbb






