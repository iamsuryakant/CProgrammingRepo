#include <bits/stdc++.h>

using namespace std;

bool Sum(int arr[], int n, int sum)
{
    int curr_sum = arr[0], s = 0;

    for(int j = 1; j < n; j++)
    {
        while(curr_sum > sum && s < j-1)
        {
            curr_sum -= arr[s];
            s++;
        }

        if(curr_sum == sum)
            return true;
        if(j<n)
            curr_sum += arr[j];
    } 
    return (curr_sum == sum);
}

int main(){
    int n = 6;
    int arr[n] = {1,4,20, 3, 10 , 5};

   // int k = 3;
    int sum = 33;
    
    ;
    if(Sum(arr, n, sum))
    {
        cout<<"Yes Sum Found"<<endl;
    }
    else{
        cout<<"Sum doesn't exit"<<endl;
    }

    return 0;
}