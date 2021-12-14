#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll dp[101][100004];

int main(){

    int n,w;
    cin >> n >> w;

    // vector<vector<int>> dp(101,vector<int>(100000,1e9));

    // vector<int> v(n);

    for(int i = 0; i < 101 ; i++){
        for (int j = 0; j<=100000; j++){
            dp[i][j] = INT_MAX;
        }
    }

    vector<int> wt(101), v(101);

    for(int i = 0; i < n ; i++){
        cin >> wt[i]>>v[i];
    }

    dp[0][0] = 0;
    dp[0][v[0]] = wt[0];

    for (int i = 1; i < n; i++){
        dp[i][0] = 0;

        for (int j = 1; j<=100000; j++){
            dp[i][j] = dp[i - 1][j];

            if(j >= v[i]){
                dp[i][j] = min(dp[i][j], wt[i] + dp[i - 1][j - v[i]]);
            }
        }
    }

    int ans = 0;

    for (int v = 100000; v >= 0; v--){
        if(dp[n-1][v] <= w)
        {
            ans = v;
            break;
        }
    }

    cout << ans;
    return 0;
}