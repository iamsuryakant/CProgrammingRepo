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

	int k, l, m, n, d;
	cin >> k >> l >> m >> n >> d;

	int count = 0;

	vector<int>dra(d);

	for (int i = 1; i <= d; i++)
	{
		dra[i]  = i;
	}

	for (int i = 1; i <= d; i++)
	{
		if ((dra[i] % k == 0 ) || (dra[i] % l == 0 ) || (dra[i] % m == 0 ) || (dra[i] % n == 0 ))
		{
			count++;
		}
	}

	cout << count << endl;
	// for (int i = 1; i <= d; i++)
	// {
	// 	cout << dra[i] << " ";
	// }

}


int main() {
	file_i_o();
	solve();
	return 0;
}
