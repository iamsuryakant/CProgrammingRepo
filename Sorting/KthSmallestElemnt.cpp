#include<bits/stdc++.h>

using namespace std;

int lPartition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l-1;

    for(int j = l; j<= h-1; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[h]);
    return i+1;
}

int kthSmallestElement(int arr[], int n, int k)
{
    int l = 0, r = n-1;
    while(l <= r){
        int pos = lPartition(arr, l, r);
        if(pos == k-1)
            return arr[pos];
        else if(pos > k-1)
            r = pos-1;
        else
            l = pos+1;
    }
    return -1;
}

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout << kthSmallestElement(arr, n, k);
    return 0;
}