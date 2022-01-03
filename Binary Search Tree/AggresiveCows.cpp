#include<bits/stdc++.h>


int ispossible(std::vector<int> &stalls, int k, int mid)
{
    int cowCount = 1;
    int las = stalls[0];
    
    for(int i = 0; i<stalls.size(); i++)
    {
        if(stalls[i] - las >= mid)
        {
            cowCount++;
            
            if(cowCount == k)
            {
                return true;
            }
            las = stalls[i];
        }
    }
    return false;
}



int aggressiveCows(std::vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int maxi = -1;
    
    for(int i = 0; i<stalls.size(); i++)
    {
        maxi = std::max(maxi, stalls[i]);
    }
    int e = maxi;
    int ans = 0;
    
    while(s<=e)
    {
        int mid = s + (e-s)/2;
        if(ispossible(stalls, k, mid))
        {
            ans = mid;
             s = mid+1;
           
        }
        else{
            e = mid-1;
        }
        
    }
    
    return ans;
}

int main(){

    int n, k; std::cin >> n >> k;

    std::vector<int> arr(n);

    for (int i = 0; i < n; i++)
        std::cin>>arr[i];

    std::cout << aggressiveCows(arr, k);

    return 0;
}