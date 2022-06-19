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

void findSwapValues(int A[], int n, int B[], int m)
{
	// Your code goes here
	int sum1 = 0, sum2 = 0;



	for (int i = 0; i < n; i++) {
		sum1 += A[i];
	}


	for (int j = 0; j < m; j++) {
		sum2 += B[j];
	}
	// cout << sum2 << endl;

	sort(A, A + n);
	sort(B, B + m);

	int i = 0, j = 0;
	bool flag = false;

	while (i < n && j < m) {

		int check1 = sum1 - (A[i] + B[j]);
		int check2 = sum2 - (A[i] + B[j]);

		if (check1 == check2) {
			cout << "1" << endl;
			break;
		}
		else if (check1 > check2)
		{
			i++;
		} else {
			j++;
		}
	}

	cout << -1 << endl;

}




void solve() {

	int n, m; cin >> n >> m;

	int A[n], B[m];

	for (int i = 0; i < n; i++)
		cin >> A[i];

	for (int i = 0; i < n; i++)
		cin >> B[i];

	findSwapValues(A, n, B, m);

}


int main() {
	file_i_o();

	solve();
	return 0;
}
