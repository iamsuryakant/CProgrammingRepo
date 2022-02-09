#include<bits/stdc++.h>

using namespace std;

int maxpro(int arr[])
{
    int maxi = 0;
    int minp = INT_MAX;
    for(int i = 0; i < 6; i++)
    {
        minp = min(minp, arr[i]);
        maxi = max(maxi, arr[i] - minp);
    }

    return maxi;
}


int main(){

    int arr[] = {7, 1, 5, 3, 6, 4};

    cout << maxpro(arr) << endl;

    return 0;
}