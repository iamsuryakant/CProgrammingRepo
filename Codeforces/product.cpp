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

int digitSum(int num)
{
	int sum = 0;
	while (num != 0)
	{
		sum += num % 10;
		num = num / 10;
	}

	return sum;
}


vector<int> product(vector<int>OrderID) {

	int n = OrderID.size();

	vector<int> ans;

	for (int i = 0; i < n; i++)
	{
		ans.push_back(digitSum(OrderID[i]));
	}

	return ans;

}




void solve() {

	int n; cin >> n;

	vector<int>arr(n);

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	vector<int>ans = product(arr);


	for (auto x : ans)
		cout << x << " ";
}


int main() {
	file_i_o();
	// int t; cin>>t;

	// while(t--){

	solve();
	// }
	return 0;
}
