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


vector<int> primefactors(int n)
{
	int c = 2;

	vector<int>primef;

	while (n > 1) {
		if (n % c == 0) {
			primef.pb(c);
			n /= c;
		}
		else c++;
	}

	return primef;
}



void solve() {

	int n; cin >> n;
	vector<int>primes = primefactors(n);

	bool flag = true;

	if (n == 1) {
		cout << "true" << endl;
		flag = false;
	}

	for (int i = 0; i < primes.size(); i++)
	{
		if (primes[i] > 2 || primes[i] > 3 || primes[i] > 5) {
			cout << "false" << endl;
			flag = false;
			//break;
		}
	}

	if (flag) {
		cout << "true" << endl;
	}

}


int main() {
	file_i_o();
	solve();
	return 0;
}
