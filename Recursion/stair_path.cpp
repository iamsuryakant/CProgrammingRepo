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

void printStair(int n, string ans) {

	//base case

	if (n < 0) {
		return;
	}

	if (n == 0)
	{
		cout << ans << endl;
	}

	printStair(n - 1, ans + '1');
	printStair(n - 2, ans + '2');
	printStair(n - 3, ans + '3');

	//cout<<ans<<endl;

}

void solve() {
	int n; cin >> n;

	string ans = "";

	printStair(n, ans);

}


int main() {
	file_i_o();
	solve();
	return 0;
}
