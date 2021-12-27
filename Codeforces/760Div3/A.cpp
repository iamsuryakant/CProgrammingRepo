#include<bits/stdc++.h>

using namespace std;

void solve(){

    int t; cin>>t;

    while(t--)
    {
        int n = 7;
        int b[n];
        int a[3];
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        
        cout<<b[6]-b[5]<<" "<<b[1]<<" "<<b[5]-b[1]<<endl;
    }
}

int main(){

    solve();

    return 0;
}