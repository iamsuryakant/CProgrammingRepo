 #include<bits/stdc++.h>

using namespace std;

int dp[1000000];

int frog(int a[], int ind, int n){
  
  if(ind == n-1){
    return 0;
  }
  
  if(dp[ind] != -1) return dp[ind];
  
  int left = abs(a[ind] - a[ind+1]) + frog(a,ind+1, n);
  int right = INT_MAX;
  
  if(ind + 2 <n)
  {
    right = abs(a[ind]-a[ind+2]) + frog(a, ind +2, n);
  }
  
  return dp[ind] = min(left, right);
  
}

int main(){
    int n; cin>>n;

    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    memset(dp, -1, sizeof dp);

    cout << frog(a, 0, n);
    return 0;
}