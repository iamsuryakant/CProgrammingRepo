#include <bits/stdc++.h>

using namespace std;

int MaxSum(int arr[], int n, int k)
{
    if(n<k){
        cout<<"Invalid";
        return -1;
    }
    int curr_sum = 0;
    for(int i = 0; i < k; i++)
    {
        curr_sum += arr[i];
    }

    int window = curr_sum;

    for(int i = k; i<n; i++)
    {
        curr_sum += arr[i] - arr[i-k];

        window = max(window, curr_sum);
    }

    return window;


}

int main(){

    int n = 6;
    int arr[n] = {1,8,30, -5, 20 , 7};

    int k = 3;
    int sum = 44;
    
    int max_sum = MaxSum(arr, n, k);
    cout<<max_sum<<endl;
    if(max_sum == sum )
    {
        cout<<"Yes Sum Found"<<endl;
    }
    else{
        cout<<"Sum doesn't exit"<<endl;
    }

    return 0;
}