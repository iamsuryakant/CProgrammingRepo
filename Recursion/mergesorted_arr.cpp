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

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

	int temp[m + n];

	int i = 0, j = 0, k = 0;

	while (i <= m && j <= n) {
		if (nums1[i] <= nums2[j]) {
			temp[k] = nums1[i];
			k++;
			i++;
		} else {
			temp[k] = nums2[j];
			k++;
			j++;
		}
	}

	while (i < m) {
		temp[k++] = temp[i++];
	}

	while (j < n) {
		temp[k++] = temp[j++];
	}

	for (int i = 0; i < m + n; i++) {
		cout << temp[i] << " ";
	}

}

void solve() {

	int m, n; cin >> m >> n;

	vector<int>nums1(m);
	vector<int>nums2(n);

	for (int i = 0; i < m; i++)
		cin >> nums1[i];

	for (int j = 0; j < n; j++)
		cin >> nums2[j];

	merge(nums1, m, nums2, n);
}


int main() {
	file_i_o();
	solve();
	return 0;
}
