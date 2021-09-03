#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;cin >> n;

    //vector<int>vec(n);
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr+n);

    //int l = 0, h = n-1;

    //int mid = l+ h/2;

    vector<int> result;

    for(int i = 0; i < n/2; i++)
        result.push_back(arr[i]);

    //sort(arr+mid, arr+n);

    for(int i = n-1; i >= n/2 ; i--)
        result.push_back(arr[i]);
    

    for(int i = 0; i< n; i++)
        cout << result[i] << " ";

    

    return 0;

}