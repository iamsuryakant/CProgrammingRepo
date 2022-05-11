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

// Recursive Binary Search

int recBinary(int arr[], int l, int h, int x)
{
	if (l <= h) {

		int mid = (l + h) / 2;

		if (arr[mid] == x) {
			return mid;
		} else if (arr[mid] > x)
		{
			recBinary(arr, l, mid - 1, x);
		} else {
			recBinary(arr, mid + 1, h, x);
		}
	}
}











/*
// Normal Binary Search

int BinaryS(int arr[], int n, int x)
{
	int l = 0, h = n - 1;

	while (l <= h) {
		int mid = (l + h) / 2;

		if (arr[mid] == x)
		{
			return mid;
		}
		else if (arr[mid] > x)
		{
			h = mid - 1;

		} else {

			l = mid + 1;
		}
	}
	return -1;

}

*/





void solve() {


	int n; cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	// for (int i = 0; i < n; i++)
	// {
	// 	cout << arr[i] << "  ";
	// }



	//Element to be Searched

	int x; cin >> x;

	cout << recBinary(arr, 0, n - 1, x);

}


int main() {
	file_i_o();
	solve();
	return 0;
}
