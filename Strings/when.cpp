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

	ll n; cin >> n;
	ll min = 0, rem = 0;
	if (n >= 60) {
		min = n / 60;
		// cout << min << endl;
		rem = n % 60;
		//cout << rem << endl;
	} else {
		rem = n;
		//cout << rem << endl;
	}
	//cout << min * 100 + rem << endl;

	string res = to_string(2100 + (min * 100 + rem));

	string ans = "";

	ll  n1 = res.length();

	// cout << n1 << endl;
	for (int i = 0; i < n1; i++)
	{

		if (i < 2) {
			if (i < 1) {
				ans += res[i];
			} else
			{
				ans += res[i];
				ans += ':';
			}
		}
		else {
			ans += res[i];
		}

	}

	cout << ans;
	//for(iny)
	//string res = "21:00";

	// int res1 = (21 + min);

	// int res2 = 00;



	//cout << res1 << ":" << res2 << endl;
}



int main() {
	file_i_o();
	// int t; cin>>t;

	// while(t--){

	solve();
	// }
	return 0;
}
