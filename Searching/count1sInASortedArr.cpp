#include<bits/stdc++.h>

using namespace std;

int Count1(int arr[], int n)
{
    int l = 0, h = n-1;

    while (l <= h)
    {
        int mid = (l + h) / 2;

        if(arr[mid] == 0)
            l = mid+1;
        else
        {
            if(mid == 0 || arr[mid - 1] != arr[mid])
                return (n-mid);
            else
                h = mid - 1;
        }
    }
    return -1;
}

int main(){

    int n = 8;

    int arr[n] = {0,0,0,0, 1, 1, 1, 1};

    cout<<Count1(arr, n);
}