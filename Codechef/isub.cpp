#include<bits/stdc++.h>
using namespace std;

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





void isSub(int ind, int n, string s,  string t, vector<char>&ds) {

	if (ind == n) {
		string temp;

		for (auto x : ds) {
			temp += x;
		}

		cout << temp << endl;

		return;
		// if (temp == s) {
		// 	return true;
		// }

	}

	ds.push_back(t[ind]);
	isSub(ind + 1, n, s, t, ds);
	ds.pop_back();


	isSub(ind + 1, n, s, t, ds);


	//return false;
}

bool isSubsequence(string s, string t) {

	vector<char>ds;

	//string ans = "";
	int n = t.length();

	isSub(0, n, s, t, ds);

	// if () {
	// 	cout << "YES" << endl;
	// } else {
	// 	cout << "NO" << endl;
	// }

}



void solve() {

	string s, t; cin >> s >> t;


	//cout << n << endl;

	isSubsequence(s, t);
	//isSub(0, n, t, ds, ans);

	//cout << ans << endl;

	// for (int i = 0; i < ans.size(); i++)
	// {
	// 	for (int j = 0; j < ans[0].size(); j++)
	// 	{
	// 		cout << ans[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

}


int main() {
	file_i_o();
	solve();
	return 0;
}
