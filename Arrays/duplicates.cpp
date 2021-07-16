#include <bits/stdc++.h>
using namespace std;

bool duplicates(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
            if(arr[j] == arr[i])
                return true;
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout << duplicates(arr,n);
}