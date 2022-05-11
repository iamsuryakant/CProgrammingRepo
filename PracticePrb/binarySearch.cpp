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



//Linear Search

void linearS(int arr[], int n, int x) {
	bool flag = false;
	int ind = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			ind = i;
			flag = true;
			break;
		}

	}

	if (flag)
	{
		cout << "Element found at: " << ind << endl;
	} else {
		cout << "Element not found" << endl;
	}
}

void solve() {

	int n; cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}



	//Element to be Searched

	// int x; cin >> x;

	// cout << BinaryS(arr, n, x);


}


int main() {
	file_i_o();
	solve();
	return 0;
}
