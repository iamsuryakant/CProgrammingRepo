#include<bits/stdc++.h>

using namespace std;

const int R = 4, C = 4;

void Searching(int mat[R][C], int x)
{
    int i = 0, j = C-1;
    while(i < R && j >= 0)
    {
        if(mat[i][j] == x)
        {
            cout << "Found at (" << i << "," << j << ")" << endl;
            return;
        }
        else if(mat[i][j] > x)
        {
            j--;
        }
        else{
            i++;
        }
    }
    cout << "Not found" << endl;
}

int main()
{
    int mat[R][C] = {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    Searching(mat, 24);
    Searching(mat, 50);
    return 0;
}

