#include<bits/stdc++.h>

using namespace std;


int binarySearch(int arr[],int n,  int data)
{
    int l = 0, h = n-1;

    while(l<=h){
        int mid = (l+h)/2;

        if(arr[mid] == data)
        {
            return mid;
        }

        else if(arr[mid] < data)
        {
            l = mid+1;
        }

        else{
            h = mid - 1;
        }
        
        return -1;
    }
}


int main(){

    int n; cin>>n;

    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    int data; cin>>data;

    cout<<binarySearch(arr,n,data);


}