#include <bits/stdc++.h>

using namespace std;
/*
int maxSum(int arr[], int n, int k)
{
    int MaxSum = 0;

    for(int i = 0; i < n-k+1; i++)
    {
        int curr_sum = 0;

        for(int j = 0; j < k; j++)
        {
              curr_sum += arr[i+j];           
        }

        MaxSum = max(MaxSum, curr_sum);
    }

    return MaxSum;
}*/

int maxSum(int arr[], int n, int k)
{
    if(n<k){
        cout << "Invalid";
        return -1;
    }

    int max_sum = 0;

    for(int i = 0; i <k; i++)
    {
        max_sum += arr[i];
    }

    int window = max_sum;

    for(int i = k; i < n; i++)
    {
        window += arr[i] - arr[i-k];

        max_sum = max(max_sum, window);
    }

    return max_sum;
    
}

int main(){

    int n = 5;
   // cin>>n;
    int arr[n] = {5,-2,1,0,3};

    // for(int i = 0;i<n;i++){
    //     cin>>arr[i];
    // }
    int k = 3;
    //cin>>k;
    
    cout<< maxSum(arr, n, k);
}