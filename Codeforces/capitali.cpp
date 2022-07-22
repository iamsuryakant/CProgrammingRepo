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

void solve() {

	string s; cin >> s;

	s[0] = toupper(s[0]);

	cout << s << endl;

}


int main() {
	file_i_o();
	solve();
	return 0;
}
