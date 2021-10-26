#include<bits/stdc++.h>

using namespace std;

void minSwap(int arr1[], int arr2[], int n, int m)
{
    int sum1 = 0, sum2 = 0;

    for(int i = 0; i < n; i++)
    {
        sum1 += arr1[i];
    }

    for(int i = 0; i < m; i++)
    {
        sum2 += arr2[i];
    }

    if(sum1%2 == 0 && sum2%2 == 0)
    {
        cout<<0;
        return;
    }

    if(sum1%2 != 0 && sum2%2 != 0){

        int f = -1;

        for(int i = 0; i < m && i < n; i++)
        {
            if((arr1[i] + arr2[i])%2 == 1)
            {
                f = 1;
                break;
            }
        }

        cout<<f<<endl;
        return;
    }

    cout<<-1;
}

void solve(){

    int n; cin>>n;
    int arr1[n];

    for(int i = 0; i < n; i++){
        cin>>arr1[i];

    }

    int m; cin>>m;

    int arr2[m];

    for(int i = 0; i < m; i++)
    {
        cin>>arr2[i];
    }

    minSwap(arr1, arr2, n, m);
}

int main(){

    solve();

    return 0;
}