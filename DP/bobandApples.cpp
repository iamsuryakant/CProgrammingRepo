#include <bits/stdc++.h>

using namespace std;

int bobandApples(int m, int wt[], int val[], int n) {

    int dp[n+1][m+1];
    for(int i = 0; i <= m; i++)
    {
        dp[0][i] = 0;
    }
    for(int i = 0; i <= n; i++)
    {
        dp[i][0] = 0;
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(wt[i-1] < j) {
                dp[i][j] = dp[i-1][j];
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-wt[i-1]] + val[i-1]);
            }
        }
    }
    return dp[n][m];
    
}

int main(){

    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int wt[n],val[n];
        for(int i = 0; i < n; i++){
            cin >> wt[i] >> val[i];
        }
        cout << bobandApples(m, wt, val, n) << endl;
    }
    return 0;
}