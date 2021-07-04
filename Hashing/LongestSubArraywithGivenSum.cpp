#include<bits/stdc++.h>

using namespace std;

int maxSub(int arr[], int n, int sum)
{
    int res = 0;

    for(int i = 0; i < n; i++)
    {
        int curr_sum = 0;

        for(int j = i; j<n; j++)
        {
            curr_sum += arr[j];
            if(curr_sum==sum)
            {
                return max(res, j-i+1);
            }
        }   
    }
    return res;
}


int main(){
    int arr[] = {1, 4, 20, 3, 10, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 33;
    cout<<maxSub(arr, n, sum);
    return 0;
}