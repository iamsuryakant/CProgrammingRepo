#include<bits/stdc++.h>

using namespace std;

int solve(string s1, string s2, int n, int m, vector<vector<int>>&dp)
{
   for(int i = 1; i <= n; i++){
       for (int j = 1; j <= m; j++){
           if(s1[i-1] == s2[j-1]){
               dp[i][j] = dp[i - 1][j - 1] + 1;
           }
           else{
               dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
           }
       }
   }
   return dp[n][m];
}


void printlcs(string s1, string s2, int n, int m, vector<vector<int>>&dp)
{
    int index = dp[n][m];

    string lcs(index, 0);

    int i = n, j = m;

    while(i>0 && j>0)
    {
        if(s1[i-1] == s2[j-1])
        {
            lcs[index-1] = s1[i-1];
            index--;
            i--;
            j--;
        }
        else if(dp[i-1][j] > dp[i][j-1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }

    cout << lcs;
}


int main(){
    string s1,s2;
    cin>>s1>>s2;

    int n = s1.size();
    int m = s2.size();

    vector<vector<int>> dp(n+1,vector<int>(m+1,0));

    solve(s1, s2, n, m, dp);

    printlcs(s1, s2, n, m, dp);
}