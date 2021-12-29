#include<bits/stdc++.h>


int main(){

    int m, n;

    std::cin >> m >> n;

    std::vector<std::vector<int>> arr(m, std::vector<int>(m,0));

    for(int i = 0; i < m; i++)
    {
        //std::vector<int> v;
        for (int j = 0; j < n; j++)
        {
            int t;
            std::cin >> t;

            arr[i][j] = t;
        }
        //arr.push_back(v);
    }

   std::vector<std::vector<int>> ans(m, std::vector<int>(m,0));

    for(int i = 0; i < m; i++)
    {
        for(int j =0; j < n; j++)
        {
            ans[i][j] = arr[j][i];
        }
    }


    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j< n; j++)
        {
            std::cout << ans[i][j] << " ";
        }
        std::cout<<std::endl;
    }

    return 0;
}