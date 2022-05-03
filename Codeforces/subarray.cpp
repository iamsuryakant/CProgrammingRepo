#include<bits/stdc++.h>


// Suryakant Thakur

using namespace std;


#define ll              long long int
#define ld              long double
#define mod             1000000007
#define inf             1e18
#define endl            "\n"
#define pb              push_back
#define vi              vector<ll>
#define vs              vector<string>
#define pii             pair<ll,ll>
#define ump             unordered_map
#define mp              map
#define ps(x, y)        fixed<<setprecision(y)<<x
#define pq_max          priority_queue<ll>                                  // max heap
#define pq_min          priority_queue<ll,vi,greater<ll> >                  // min heap
#define fi              first
#define sec             second
#define mid(l,r)        (l+(r-l)/2)
#define floop(i,a,b)    for(int i = (a); i <= (b); i++)
#define rloop(i,a,b)    for(int i = (a); i >= (b); i--)


void file_i_o()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

}

void solve() {
    int t; cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int res = 0;
        bool is_prev_window = false;
        int i = 0;
        while (i < n) {

            if (is_prev_window == false) {
                int j = i;
                int count = 0;
                while (j < n && count < x && arr[j] <= k) {

                    j++;
                    count++;
                }
                if (count == x) {
                    is_prev_window = true;
                    res++;
                    i = j;
                }
                else
                    i = j + 1;


            }
            else {
                if (arr[i] <= k) {
                    res++;
                    i++;
                }
                else
                {
                    is_prev_window = false;
                    i++;
                }
            }

        }

        cout << res << endl;

    }
}

int main() {
    file_i_o();
    solve();
    return 0;
}
