#include<bits/stdc++.h>

using namespace std;

// int dp[1000000];

int frog(int a[], int n){
    int dp[n+1];
    dp[0] = 0;

    if(n == 1){
        return 0;
    }

    dp[1] = abs(a[0] - a[1]);

    for(int i = 2; i < n; i++){
        dp[i] = min(dp[i-1] + abs(a[i] - a[i-1]), dp[i-2] + abs(a[i] - a[i-2]));
    }

    return dp[n-1];
}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i<n; i++)
    cin>>arr[i];
  
  //memset(dp, -1, sizeof (dp));
  cout<<frog(arr, n);
  return 0;

}