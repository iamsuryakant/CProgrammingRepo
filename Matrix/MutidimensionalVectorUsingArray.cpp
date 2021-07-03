#include<bits/stdc++.h>

using namespace std;

int main(){

    int m = 3, n = 2;
    vector<vector<int>> arr;

    for(int i = 0; i < m; i++)
    {
        vector<int> temp;
        
        for(int j = 0; j<n; j++)
        {
            temp.push_back(10);
        }
        arr.push_back(temp);
    }

    for(int i = 0; i<arr.size(); i++)
    {
        for(int j = 0; j<arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
}