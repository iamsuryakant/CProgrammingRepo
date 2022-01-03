#include<bits/stdc++.h>

using namespace std;

void KeepInd(vector<int> v, int n)
{
    pair<int, int> pii[n];

    for(int i = 0; i < n; i++)
    {
        pii[i] = {v[i], i};
    }

    sort(pii, pii + n);

    for(int i = 0; i < n ; i++)
    {
        cout << pii[i].first << " " << pii[i].second << endl;
    }
}


int main(){

    int n;
    cin >> n;
    vector<int> v(n);


    for(int i = 0; i< n; i++)
    {
        cin >> v[i];
    }

    KeepInd(v, n);

    return 0;
}