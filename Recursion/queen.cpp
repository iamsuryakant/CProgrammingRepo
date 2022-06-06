bool isSafe(int row, int col, vector<vector<int>>&board, int n) {
    for (int i = row - 1, j = col; i >= 0; i--)
    {
        if (board[i][j] == 1)
            return false;
    }


    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 1)
            return false;
    }

    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 1)
            return false;
    }


    return true;

}


void NQueen(int row, vector<vector<int>>&ans, vector<vector<int>>&board, int n) {
    if (row == n) {
        vector<int> sol;
        for (auto x : board) {
            for (auto y : x) {
                sol.push_back(y);
            }
        }
        ans.push_back(sol);
        return;
    }

    for (int col = 0; col < n; col++)
    {
        if (isSafe(row, col, board, n)) {
            board[row][col] = 1;
            NQueen(row + 1, ans, board, n);
            board[row][col] = 0;
        }
    }
}



vector<vector<int>> solveNQueens(int n) {
    // Write your code here.
    vector<vector<int>>ans;
    vector<vector<int>>board(n, vector<int>(n, 0));
    NQueen(0, ans, board, n);

    return ans;
}