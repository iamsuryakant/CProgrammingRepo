#include <bits/stdc++.h>



void PairSum(std::vector<int>&arr, int n, int s)
{
    std::vector<std::vector<int>> ans;
    for (int i = 0; i< n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
           
            if(arr[i]+arr[j] == s)
            {
                std::vector<int> temp;
                temp.push_back(std::min(arr[i], arr[j]));
                temp.push_back(std::max(arr[i], arr[j]));

                ans.push_back(temp);
            }
            // ans.push_back({arr[i], arr[j]});
        }
    }

    for(int i = 0; i < ans.size(); i++)
    {
        for(int j = 0; j < ans[0].size(); j++)
        {
            std::cout << ans[i][j] << " ";
        }
        std::cout << std::endl;
    }

}

int main()
{
    int n, s;

    std::cin >> n>>s;

    std::vector<int> arr(n);

    for(int i = 0; i < n; i++)
        std::cin>>arr[i];

    PairSum(arr, n, s);

    return 0;
}