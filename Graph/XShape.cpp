// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the number of 'X' total shapes.
    void DFS(vector<vector<char>> &grid, int i, int j, int n, int m)
    {
        if(i >= n || j >= m || i < 0 || j < 0 || grid[i][j] == 'O'){
            return;
        }
        
        grid[i][j] = 'O';   
        DFS(grid, i-1, j, n, m);
        DFS(grid, i, j-1, n, m);
        DFS(grid, i, j+1, n, m);
        DFS(grid, i+1, j, n, m);
    }
    int xShape(vector<vector<char>>& grid) 
    {
        // Code here
        int count = 0;
        
        int n = grid.size();
        int m = grid[0].size();
        
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                if(grid[i][j] == 'X')
                    count++;
                    DFS(grid, i, j, n, m);
                    
                
            }
           
        }
        return count;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m, '#'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.xShape(grid);
		cout << ans <<'\n';
	}
	return 0;
}  // } Driver Code Ends