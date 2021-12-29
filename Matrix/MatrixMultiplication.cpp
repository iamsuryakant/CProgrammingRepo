#include<bits/stdc++.h>

int main()
{
    int m, n;
    std::cin>>m>>n;

    std::vector<std::vector<int>> arr1(m, std::vector<int>(m, 0));
    std::vector<std::vector<int>> arr2(m, std::vector<int>(m, 0));
    std::vector<std::vector<int>> ans(m, std::vector<int>(m, 0));

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int t;
            std::cin >> t;
            arr1[i][j] = t;
        }
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int t; std::cin>>t;
            arr2[i][j] = t;
        }
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            ans[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                ans[i][j] += arr1[i][k] * arr2[k][j];
            }
                
        }
    }


    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            std::cout << ans[i][j] << " ";
        }
        std::cout<<std::endl;
    }

    return 0;


}