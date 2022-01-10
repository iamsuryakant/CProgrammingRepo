#include<bits/stdc++.h>

using namespace std;


int getMin(int coins[], int n, int val)
{
    int dp[val + 1];

    dp[0] = 0;

    for (int i = 1; i <= val; i++)
        dp[i] = 1e9;

    for (int i = 1; i <= val; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(coins[j] <= i)
            {
                int sub_re = dp[i - coins[j]];

                if(sub_re != 1e9)
                {
                    dp[i] = min(dp[i], sub_re + 1);
                }
            }

            
        }
    }

    return dp[val];
}


int main()
{
    int n;
    cin >> n;

    int coins[n];

    for(int i = 0; i < n; i++)
        cin >> coins[i];

    int val;
    cin >> val;
    cout << getMin(coins, n, val);

    return 0;
}