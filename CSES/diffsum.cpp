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


int sum(int a, int b) {

	int sum1 = 0;
	//if A is positive

	while (a > 0) {
		a--;
		b++;
	}
	sum1 = b;

	//if A is negative

	while (a < 0) {
		a++;
		b--;
	}

	sum1 = b;

	return sum1;

}



int main() {
	file_i_o();


	int a, b;
	cin >> a >> b;

	cout << sum(a, b) << endl;

	return 0;
}
