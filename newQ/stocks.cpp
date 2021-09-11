#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 0;

    int mini = INT_MAX;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin>>arr[i];

    for(int i = 0;i<n; i++)
    {
        if(mini < arr[i])
            mini = arr[i];
    }

    cout<<mini;
}