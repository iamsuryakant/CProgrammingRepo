#include<bits/stdc++.h>

using namespace std;

int LastIndexOfOccur(int arr[], int n, int data)
{
    int l = 0, r = n-1;

    while(l<=r)
    {
        int mid = (l+r)/2;

        if(arr[mid] < data)
            l = mid + 1;
        else if(arr[mid] > data)
            r = mid - 1;
        
        else{

            if(mid == n-1|| arr[mid] != arr[mid+1])
                return mid;
            else
                l = mid + 1;
        }
        
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

    cout<<LastIndexOfOccur(arr,n, data);
}