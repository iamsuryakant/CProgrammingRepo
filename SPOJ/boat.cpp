#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int p[m],b[n];
    for(int i=0;i<m;i++){
        cin>>p[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(p,p+m);
    sort(b,b+n);
    int i=0,j=0;
    int arr[n]={0};
    while(i<m && j<n){
        if(p[i]<=b[j]){
            arr[j]++;
            i++;
        }
        else j++;
    }
    int mx=0;
    for(i=0;i<n;i++){
        mx=max(mx,arr[i]);
    }
    cout<<2*mx-1;
    return 0;
}