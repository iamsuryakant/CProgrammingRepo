#include<bits/stdc++.h>

using namespace std;

int CountInv(int arr[], int l, int m, int h)
{
    int n1 = m-l+1, n2 = h-m;

    int L[n1], R[n2];

    for(int i = 0; i < n1; i++)
    {
        L[i] = arr[l+i];
    }
    for(int j = 0; j < n2; j++)
    {
        R[j] = arr[m+1+j];
    }

    int i = 0, j = 0, k = l;
    int res = 0;
    while(i<n1 && j<n2)
    {
        if(L[i] <= R[j])
        {
            arr[k++] = L[i++];
        }
        else{
            arr[k++] = R[j++];
            res = res + (n1 - i);
        }
    }

    while(i<n1)
    {
        arr[k++] = L[i++];
    }

    while(j<n2)
    {
        arr[k++] = R[j++];
    }

    return res;

}

int Count1(int arr[], int l, int h)
{
   

    int res =0;
    if(l < h)
    {
        int m = (l+h)/2;

        res += Count1(arr, l, m);
        res += Count1(arr, m+1, h);
        res += CountInv(arr, l, m, h);
    }

    return res; 
}

int main(){

    int arr[] = {8,4,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<Count1(arr, 0, n-1);

    return 0;

}