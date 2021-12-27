#include<bits/stdc++.h>

using namespace std;

#define int long long int

void solve(){

    int t; cin>>t;

    while(t--)
    {
        int n;
        cin >> n;

        int arr[n];

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int g1 = arr[0], g2 = arr[1];

        for(int i = 0; i < n; i = i+2)
        {
            g1 = __gcd(g1, arr[i]);
        }

        for(int i = 1; i < n; i = i+2)
        {
            g2 = __gcd(g2, arr[i]);
        }

        bool flag = 1;

        for(int i = 1; i < n; i = i+2)
        {
            if(arr[i]%g1 == 0)
            {
                flag = 0;
            }
        }

        if(flag)
        {
            cout<<g1<<endl;
            
        }
        else{

            flag = 1;
             
            for(int i = 0; i < n; i = i+2)
            {
                if(arr[i]%g2 == 0)
                {
                    flag = 0;
                }
            }

            if(flag)
            {
                cout<<g2<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
    }
}

signed main()
{
    solve();

    return 0;
}