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

	int  n = s.length();

	unordered_map<char, int> mp;

	for (auto x : s) {
		mp[x]++;
	}

	priority_queue<pair<int, char>>pq;


	for (auto [ch, freq] : mp) {
		pq.push({freq, ch});
	}


	string res;

	pair<int, char> curr;

	while (!pq.empty()) {
		curr = pq.top();
		pq.pop();
		res += string(curr.first, curr.second);
	}

	cout << res;


}


int main() {
	file_i_o();
	solve();
	return 0;
}
