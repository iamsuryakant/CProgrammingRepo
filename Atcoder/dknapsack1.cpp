#include<bits/stdc++.h>

using namespace std;
#define int long long int
// int dp[101][100004];

int knapSack(vector<int>&wt,vector<int>&value,vector<vector<int>>&dp,int n,int w)
{
    if(w<=0 || n<=0)
        return dp[n][w]=0;

    if(dp[n][w]!=-1) return dp[n][w];

    if(wt[n-1]>w){
        dp[n][w]=knapSack(wt,value,dp,n-1,w); 
    }
    else{
        dp[n][w]= max(value[n-1]+knapSack(wt,value,dp,n-1,w-wt[n-1]),knapSack(wt,value,dp,n-1,w));
    }    
    return dp[n][w];
    
}

signed main(){

    int n,w;
    cin >> n >> w;

    vector<vector<int>> dp(n+1,vector<int>(w+1,-1));

    // vector<int> v(n);
    vector<int> wt(n), v(n);

    for(int i = 0; i < n ; i++){
        cin >> wt[i]>>v[i];
    }

    

    knapSack(wt, v, dp, n, w);

    cout<<dp[n][w]<<endl;

    return 0;
}