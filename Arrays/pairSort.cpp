#include<bits/stdc++.h>

using namespace std;


void sortChar(int arr[], char ch[], int n)
{
    pair<int, char> pii[n];

    for(int i = 0; i < n; i++)
    {
        pii[i] = {arr[i], ch[i]};
    }

    sort(pii, pii + n);

    for(int i = 0; i < n; i++)
    {
        cout << pii[i].second << " ";
    }
}




int main(){

    int n;
    cin >> n;

    int arr[n];
    char ch[n];

    for(int i = 0; i < n; i++)
        cin>>arr[i];

    for(int i = 0; i < n; i++)
        cin>>ch[i];

    sortChar(arr,  ch, n);

    return 0;
}