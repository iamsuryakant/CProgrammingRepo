#include<bits/stdc++.h>

using namespace std;



int rak(int arr[], int n)
{
    int sum = 0;
    
   for(int i = 0; i<n; i++)
   {
       sum += arr[i];
   }
    
    int count = 0;
    
    if(sum <= 0)
    {
        for(int i = 0; i < n; i++)
        {
            if(arr[i] >= 0)
            {
                count++;
            }
        }
    }
    else{
        return n;
    }
    
    return count;
}

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout << rak(arr, n);
}