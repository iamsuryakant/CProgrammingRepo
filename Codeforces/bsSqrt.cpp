#include<bits/stdc++.h>

using namespace std;

void solve(){

    int n; cin>>n;

    int low = 0, high = n/2;

    int ans = 1;

    while(low <= high)
    {
        int mid = (low + high)/2;

        if(mid*mid <= n){
            low = mid + 1;
            ans = mid;
        }
        else{
            high = mid - 1;
        }
    }
    cout<<ans << '\n';
}

int  main(){

    solve();
    return 0;
}