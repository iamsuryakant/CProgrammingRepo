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

// Naive Pattern Searching
// Time Complexity = O((n-m+1)*m)

bool isPattern(string s1, string s2)
{
	int n = s1.length();
	int m = s2.length();

	for (int i = 0; i <= n - m; i++)
	{
		int j = 0;

		for (; j < m; j++)
		{
			if (s2[j] != s1[i + j]) {
				break;
			}
		}

		if (j == m)
		{
			return true;
		}
	}
	return false;
}



// Improved Naive Pattern Searching
// Time Complexity = Theta(n).

void isPatternDist(string s1, string s2)
{
	int n = s1.length();
	int m = s2.length();

	for (int i = 0; i <= n - m;)
	{
		int j = 0;

		for (; j < m; j++)
		{
			if (s2[j] != s1[i + j]) {
				break;
			}
		}

		if (j == m)
		{
			cout << i << " ";
		}

		if (j == 0)
		{
			i++;
		} else {
			i = i + j;
		}
	}
}





void solve() {

	string s1, s2; cin >> s1 >> s2;

	isPatternDist(s1, s2);

	// if (ans)
	// {
	// 	cout << "YES" << endl;
	// } else {
	// 	cout << "NO" << endl;
	// }

}


int main() {
	file_i_o();
	solve();
	return 0;
}
