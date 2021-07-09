#include<bits/stdc++.h>
using namespace std;

int kthSmallest(vector<vector<int>> &matrix, int k) {
    int n = matrix.size();
    int m = matrix[0].size();
    int i = 0, j = m - 1;
    while (i < n && j >= 0) {
        if (k == 1) {
            return matrix[i][j];
        }
        if (k > 1) {
            k--;
        }
        if (matrix[i][j] > matrix[i + 1][j]) {
            j--;
        } else {
            i++;
        }
    }
    return matrix[i][j];
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    int k;
    cin >> k;
    cout << kthSmallest(matrix, k);
    return 0;
}