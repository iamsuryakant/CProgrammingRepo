#include<bits/stdc++.h>

using namespace std;

void solve(){

    int n; cin>>n;
    int y; cin>>y;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin>>arr[i];

    int time = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= y)
        {
            time += min(arr[i], y);
        }
        else{
            time = time+arr[i];
        }
    }

    cout<<time<<endl;


}

int main(){

    solve();

    return 0;
}