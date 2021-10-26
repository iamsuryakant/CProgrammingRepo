#include<bits/stdc++.h>

using namespace std;

void solve(){

    int n, t; cin >> n >> t;

    string s;cin >> s;

    while(t--)
    {
        for(int i = 1; i<n; i++)
        {
            if(s[i] == 'G' && s[i-1] == 'B')
            {
                s[i] = 'B';
                s[i-1] = 'G';

                i++;
            }
        }
    }

    cout<<s<<endl;

}



int main(){

    solve();
    return 0;
}