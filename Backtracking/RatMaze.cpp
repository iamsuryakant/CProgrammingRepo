#include <bits/stdc++.h>

using namespace std;

bool isItSafe(int i, int j, int n){
    // we don't go away from the boundary

    return i>=0 && i<n && j>= 0 && j<n;
}

int res = 0;
void RatMaze(vector<vector<int>> &arr, int n, int i, int j,vector<vector<int>> &visited){

    if(arr[n-1][n-1] == 1) return;
    // destination is blocked.

    if(i == n-1 && j == n-1){
        //one possible way

        res++;
    }

    if( !isItSafe(i, j, n)){
        //out of boundary

        return;
    }

    visited[i][j] = 1;
    if(isItSafe(i-1, j, n) && arr[i-1][j] == 0 && visited[i-1][j]==0){
        //up

        RatMaze(arr, n, i-1, j, visited);
    }

    if(isItSafe(i+1, j, n) && arr[i+1][j] == 0 && visited[i+1][j]==0){
        //down

        RatMaze(arr, n, i+1, j, visited);
    }

    if(isItSafe(i, j-1, n) && arr[i][j-1] == 0 && visited[i][j-1]==0){
        //left

        RatMaze(arr, n, i, j-1, visited);
    }

    if(isItSafe(i, j+1, n) && arr[i][j+1] == 0 && visited[i][j+1]==0){
        //right

        RatMaze(arr, n, i, j+1, visited);
    }

    visited[i][j] = 0;

}

int main(){

    int n;
    cin>> n;

    vector<vector<int>> arr(n, vector<int>(n,0));
    vector<vector<int>> visited(n, vector<int>(n,0));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }

    RatMaze(arr, n, 0, 0, visited);

    cout<<res<<"\n";
    return 0;
}