#include<bits/stdc++.h>

using namespace std;

int firstIndexOfOccur(int arr[], int low, int high, int x)
{
    if(low > high) return -1;

    int mid = (low+high) /2;

    if(x > arr[mid])
        return firstIndexOfOccur(arr, mid+1, high, x);
    else if(x < arr[mid])
        return firstIndexOfOccur(arr, low, mid-1, x);
    else
    {
        if(mid == 0 || arr[mid-1] != arr[mid])
            return mid;
        else
            return firstIndexOfOccur(arr, low, mid-1, x);
    }
    return -1;

}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int data; cin>>data;

    cout<<firstIndexOfOccur(arr,0,n-1, data);

}