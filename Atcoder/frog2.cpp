#include<bits/stdc++.h>

using namespace std;

int dp[1000000];

int frogB(int a[], int idx, int n, int k){

    if(idx == n-1){
        return 0;
    }

    if(dp[idx] != -1){
        return dp[idx];
    }

    int ans = INT_MAX;

    for(int i = 1; i <= k; i++){
        if(idx+i < n){
        ans = min(ans, frogB(a, idx+i, n, k) + abs(a[idx]-a[idx+i]));
        }
    }

    return dp[idx] = ans;
    
}


int main(){

    int n, k; cin >> n >> k;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    memset(dp, -1, sizeof (dp));

    cout << frogB(arr, 0, n, k);
}