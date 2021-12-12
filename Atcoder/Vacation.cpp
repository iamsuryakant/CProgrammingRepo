#include<bits/stdc++.h>

using namespace std;

//int dp[100005][4];

int vacation(vector<vector<int>>&a, int ind, int prev, vector<vector<int>> &dp, int n)
{
    //prev = 0;

    if(ind == n)
        return 0;

    if(dp[ind][prev] != -1) return dp[ind][prev];

    int ans = INT_MIN;

    if(prev == 0)
    {
        ans = max(ans, a[ind][1] + vacation(a, ind+1, 1, dp, n));
        ans = max(ans, a[ind][2] + vacation(a, ind+1, 2, dp, n));
        ans = max(ans, a[ind][3] + vacation(a, ind+1, 3, dp, n));
    }
    else if(prev == 1)
    {
        ans = max(ans, a[ind][2] + vacation(a,  ind+1, 2, dp, n));
        ans = max(ans, a[ind][3] + vacation(a, ind+1, 3, dp, n));
    }
    else if(prev == 2)
    {
        ans = max(ans, a[ind][1] + vacation(a,  ind+1, 1, dp, n));
        ans = max(ans, a[ind][3] + vacation(a,  ind+1, 3, dp, n));
    }

    else if(prev == 3)
    {
        ans = max(ans, a[ind][1] + vacation(a, ind+1, 1, dp, n));
        ans = max(ans, a[ind][2] + vacation(a, ind+1, 2, dp, n));
    }

    return dp[ind][prev] = ans;
}



int main(){

    int n; cin>>n;

    vector<vector<int>> a(n, vector<int>(4));

    for (int i = 0; i < n; i++){
        for (int j = 1; j <= 3; j++){
            cin>>a[i][j];
        }
    }

    vector<vector<int>> dp(n, vector<int>(4, -1));

    cout<<vacation(a, 0, 0, dp, n);
    return 0;
}