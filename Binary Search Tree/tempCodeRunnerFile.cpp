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