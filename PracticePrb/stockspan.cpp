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


vector <int> calculateSpan(int price[], int n)
{
	// Your code here

	vector<int> ans(n);
	stack<int>st;
	ans[0] = 1;

	for (int i = 0; i < n; i++)
	{
		//int cnt = 1;
		//int j = i;

		while (!st.empty() && price[st.top()] <= price[i])
		{
			st.pop();
		}

		if (st.empty())
		{
			ans[i] = i + 1;
		} else {
			ans[i] = (i - st.top());
		}

		st.push(i);
	}
	//ans.push_back(1);

	//reverse(ans.begin(), ans.end());

	return ans;
}













// vector <int> calculateSpan(int price[], int n)
// {
// 	// Your code here

// 	vector<int> ans;
// 	stack<int>st;
// 	st.push(price[n - 1]);

// 	for (int i = n - 2; i >= 0; i--)
// 	{
// 		int cnt = 1;
// 		int j = i;

// 		while (j >= 0 && st.top() > price[j])
// 		{
// 			cnt++;
// 			j--;
// 		}


// 		ans.push_back(cnt);
// 		st.pop();
// 		st.push(price[i]);
// 	}
// 	ans.push_back(1);

// 	reverse(ans.begin(), ans.end());

// 	return ans;
// }


void solve() {

	int n; cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	vector<int>ans = calculateSpan(arr, n);

	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << " ";
	}

}


int main() {
	file_i_o();
	solve();
	return 0;
}


// class Solution
// {
// public:
// 	//Function to calculate the span of stockâ€™s price for all n days.
// 	vector <int> calculateSpan(int price[], int n)
// 	{
// 		// Your code here

// 		vector<int> ans;
// 		stack<int>st;
// 		st.push(price[n - 1]);

// 		for (int i = n - 2; i >= 0; i--)
// 		{
// 			int cnt = 1;
// 			int j = i;

// 			while (j >= 0 && st.top() > price[j])
// 			{
// 				cnt++;
// 			}
// 			ans.push_back(cnt);
// 			st.pop();
// 			st.push(price[i]);
// 		}

// 		return ans;
// 	}
// };


// 1 1 1 2 1 4 6
// N = 6, price[] = [10 4 5 90 120 80]
//Output:
//1 1 2 4 5 1