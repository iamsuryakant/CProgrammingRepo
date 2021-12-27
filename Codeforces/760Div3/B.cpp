#include<bits/stdc++.h>

using namespace std;

#define ll long long int

void solve(){

    int t; cin>>t;

    while(t--)
    {
        int n; cin>>n;

        vector<string> s;

        for(int i = 0; i < n-2; i++)
        {
            string str;
            cin >> str;
            s.push_back(str);
        }

        string res = "";
        res += s[0];

        int f = 1;

        for (int i = 1; i < n - 2; i++)
        {
            if(res[res.size()-1] != s[i][0])
            {
                res += s[i];
                f = 0;
            }
            else
            {
                res += s[i][1];
            }
        }

        if(res.size() != n)
        {
            if(res[0] == 'a'){
                while(res.size() < n)
                {
                    res += "b";
                }
            }
            else{
                while(res.size() < n)
                {
                    res += "a";
                }
            }
        }
        cout<<res<<endl;
    }
}


signed main()
{
    solve();

    return 0;
}