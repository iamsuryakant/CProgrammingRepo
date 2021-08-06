#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fo(i, a, n) for (ll i = a; i < n; i++)
#define rfo(i, n, a) for (ll i = n; i >= a; i--)
#define m 1000000007
#define pb push_back
#define mp make_pair
#define ALL(x) begin(x), end(x)
#define RALL(x) rbegin(x), rend(x)
#define ff first
#define ss second

int main() {
	// your code goes here

    int t;
    cin>>t;

    while(t--) {

        int sum1 = 0;
        int sum2 = 0;

        //vector<int> arr;

        int g1, s1, b1, g2, s2, b2;

        cin>>g1>>s1>>b1>>g2>>s2>>b2;

        sum1 = g1+s1+b1;
        sum2 = g2+s2+b2;

        // int inp;
        // for(int i = 0; i < 6; i++)
        // {
        //     cin>>inp;
        //     arr.push_back(inp);
        // }

        // for(int i = 0; i <= 3; i++)
        //     sum1 += arr[i];

        // for(int i = 4; i<=6; i++)
        //     sum2 += arr[i];

        if(sum1 > sum2){
            cout<<1<<"\n";
           // break;
        }
        else{
            cout<<2<<"\n";
        }

    }
	return 0;
}