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

void minFlips (string S)
{
	// your code here
	int n = S.length();
	int count = 0;
	for (int i = 0; i < n - 1 ; i++)
	{
		if (S[i] == '0' && S[i + 1] == '0' && S[i - 1] != '1')
		{
			S[i] = '1';
		} else if (S[i] == '1' && S[i + 1] == '1') {
			S[i + 1] = '1';
		} else if (S[i] == '0' && S[i + 1] == '0' && S[i - 1] == '1')
		{
			S[i + 1] = '0';
		}
	}

	cout << S << endl;
	//return count;
}

void solve() {

	string s; cin >> s;

	minFlips(s);
}


int main() {
	file_i_o();
	solve();
	return 0;
}
