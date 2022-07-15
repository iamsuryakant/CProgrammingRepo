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

// O(n)
vector<int> productExceptSelfV1(vector<int>& nums) {

	int n = nums.size();
	vector<int>ans(n);
	int mul = 1;
	int mul1 = 1;
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		if (nums[i] != 0)
		{
			mul = mul * nums[i];
		} else {
			mul1 = mul1 * nums[i];
			count++;
		}

	}


	//cout<<count<<" ";

	//cout<<mul;

	for (int i = 0; i < n; i++)
	{
		if (nums[i] == 0 && count == 1)
		{
			ans[i] = mul;
		} else if (!count) {
			ans[i] = (mul / nums[i]);
		} else {
			ans[i] = mul1;
		}

	}

	return ans;

}


//Efficient Way
vector<int> productExceptSelfV2(vector<int>& nums) {

	int n = nums.size();
	vector<int> pre(nums), suf(nums), ans(n);
	partial_sum(begin(pre), end(pre), begin(pre), multiplies<int>());       // calculates & stores prefix product at each index
	partial_sum(rbegin(suf), rend(suf), rbegin(suf), multiplies<int>());    // calculates & stores suffix product at each index

//             for(auto x:pre)
//             {
//                 cout<<x<<" ";
//             }
//             cout<<endl;

//             for(auto x:suf){
//                 cout<<x<<" ";
//             }

	// cout<<endl;
	for (int i = 0; i < n; i++)
		ans[i] = (i ? pre[i - 1] : 1) * (i + 1 < n ? suf[i + 1] : 1);


	return ans;

}



void solve() {

	int n; cin >> n;

	vector<int>nums(n);

	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
	}

	vector<int>ans = productExceptSelfV2(nums);

	for (auto x : ans)
	{
		cout << x << " ";
	}

	cout << endl;

}


int main() {
	file_i_o();
	int t; cin >> t;

	while (t--) {

		solve();
	}
	return 0;
}
