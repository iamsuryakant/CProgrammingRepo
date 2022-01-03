#include<bits/stdc++.h>


bool isfeasible(std::vector<int>&arr, int n, int m, int ans)
{
    int studentC = 1, sum = 0;
    
    for(int i = 0; i<n; i++)
    {
        if(sum+arr[i]>ans){
            studentC++;
            if(studentC > m || arr[i] > ans)
                return false;
            sum = arr[i];
        }
        else{
            sum += arr[i];
        }
    }
    return true;
}





int allocateBooks(std::vector<int> arr, int n, int m) {
    // Write your code here.
    
    int mx = 0, sum = 0;
    
    for(int i = 0; i<n; i++)
    {
        sum += arr[i];
        mx = std::max(sum, arr[i]);
    }
    
    int low = 0, high = sum, res = 0;
    
    while(low<=high)
    {
        int mid = low+(high-low)/2;
        
        if(isfeasible(arr, n, m, mid)){
            res = mid;
            high = mid - 1;
        }else{
            low = mid+1;
        }
    }
    
    return res;
}

int main()
{
    int n, m; std::cin>>n>>m;

    std::vector<int> arr(n);

    for (int i = 0; i<n; i++)
        std::cin>>arr[i];

    std::cout << allocateBooks(arr, n, m);

    return 0;
}



