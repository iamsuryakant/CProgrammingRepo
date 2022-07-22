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

	int count4 = 0, count7 = 0;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '4') {
			count4++;
		} else if (s[i] == '7')
		{
			count7++;
		}
	}

	//cout << count4 << " " << count7 << endl;

	if ((count4 + count7) == 4 || (count4 + count7) == 7)
	{
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}


}


int main() {
	file_i_o();
	solve();
	return 0;
}
