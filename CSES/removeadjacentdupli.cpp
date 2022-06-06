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



bool isadj(string s) {

	for (int i = 0; i < s.length() - 1; i++)
	{
		if (s[i] == s[i + 1])
			return true;
	}

	return false;
}


void removeadj(string s) {

	// if (ans.size() == 0) {
	// 	return;
	// }


	// stack<char>st;

	// for (auto it : s)
	// {
	// 	if (st.empty())
	// 	{
	// 		st.push(it);
	// 	}
	// 	else if (st.top() == it)
	// 	{
	// 		st.pop();

	// 	} else {
	// 		st.push(it);
	// 	}
	// }

	// string ans = "";

	// while (!st.empty()) {
	// 	ans += st.top();
	// 	st.pop();
	// }

	// reverse(ans.begin(), ans.end());

	// cout << ans;



	string ans = "";

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != s[i + 1])
		{
			ans.push_back(s[i]);

		} else {
			i = i + 1;
		}
	}

	//cout << ans << endl;
	if (isadj(ans)) {
		removeadj(ans);
	}
	else {
		cout << ans << endl;
	}
	//cout << ans << endl;

}




void solve() {

	string s;
	cin >> s;

	//int n = s.length();
	//string ans = "";
	//cout << s;

	removeadj(s);



}


int main() {
	file_i_o();
	solve();
	return 0;
}
