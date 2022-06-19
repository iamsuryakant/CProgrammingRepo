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

	int t, b, c, d; cin >> t >> b >> c >> d;

	vector<int> arr;

	arr.push_back(t);
	arr.push_back(b);
	arr.push_back(c);
	arr.push_back(d);
	int count = 0;

	// for (auto it : arr)
	// {
	// 	cout << it << " ";
	// }

	// cout << endl;


	for (int i = 1; i < arr.size(); i++)
	{
		if (arr[i] > t)
		{
			count++;
		}
	}

	cout << count << endl;

	// if(b>t && c > t && d > t)
	// {
	// 	cout<<3<<endl;
	// }else if(b < t && c < t && d<t)
	// {
	// 	cout<<0<<endl;
	// }else if(b>t && c>t && d<t)
	// {
	// 	cout<<2<<endl;
	// }else if()

	// cout << count << endl;

}


int main() {
	file_i_o();
	int t; cin >> t;

	while (t--) {

		solve();
	}
	return 0;
}
