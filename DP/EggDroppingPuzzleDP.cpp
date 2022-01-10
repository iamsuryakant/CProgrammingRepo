#include<bits/stdc++.h>

using namespace std;


int eggdrops(int e, int f)
{
    int dp[f + 1][e + 1];

    for (int i = 1; i <= e; i++)
    {
        dp[1][i] = 1;
        dp[0][i] = 0;
    }

    for (int j = 1; j <= f; j++)
    {
        dp[j][1] = j;
    }

    for (int i = 2; i <= f; i++)
    {
        for (int j = 2; j <= e; j++)
        {
            dp[i][j] = 1e9;

            for (int x = 1; x <= i; x++)
            {
                dp[i][j] = min(dp[i][j], 1 + max(dp[x - 1][j - 1], dp[i - x][j]));
            }
        }
    }

    return dp[f][e];

    // Time Complexity: O(f^2*e)
    // Space Complexity: O(f*e)
}


int main()
{
    //number of eggs is 2 and no of floor is 10.

    int e = 2, f = 10;

    cout<<eggdrops(e, f)<<endl;

    return 0;
}