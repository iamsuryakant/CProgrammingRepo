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


void countfreq(string s) {


	unordered_map<string, int>mp;
	string words;
	stringstream ss(s);

	while (ss >> words) {
		mp[words]++;
	}


	for (auto it : mp) {
		cout << it.first << " " << it.second << endl;
	}
}



void solve() {

	string s;
	getline(cin, s);

	countfreq(s);

}


int main() {
	file_i_o();
	solve();
	return 0;
}
