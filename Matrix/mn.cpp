#include<bits/stdc++.h>


//Using variable sized Array.

/*int main()
{
    int m = 3, n = 2;

    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = i + j;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout<<arr[i][j]<< " ";
        }
        std::cout<<std::endl;
    }
}*/


// Using vector Arrays

int main(){
    int m = 3, n = 2;
    std::vector<std::vector<int>> arr;

    for(int i = 0; i < m; i++)
    {
        std::vector<int> v;

        for(int j = 0; j < n; j++)
        {
            v.push_back(10);
        }
        arr.push_back(v);
        }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            std::cout<<arr[i][j]<< " ";
        }

        std::cout << std::endl;
    }

}