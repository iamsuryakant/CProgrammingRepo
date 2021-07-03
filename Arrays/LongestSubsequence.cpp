#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void LongestSubsequence(ll A[], ll n, ll k)
{
    ll i, j, max_len = 0, len = 0;
    for (i = 0; i < n; i++)
    {
        len = 0;
        for (j = i; j < n; j++)
        {
            if (A[j] >= k)
                break;
            len++;
        }
        if (len > max_len)
            max_len = len;
    }
    cout << max_len << endl;
}

int main()
{
    ll n, k;
    cin >> n >> k;
    ll A[n];
    for (ll i = 0; i < n; i++)
        cin >> A[i];
    LongestSubsequence(A, n, k);    
    return 0;

}