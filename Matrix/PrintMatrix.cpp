#include<bits/stdc++.h>
using namespace std;

void printMat(int mat[3][2])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j<2; j++)
        {
            cout << mat[i][j] << " ";
        }
    }
}

int main(){
    int mat[3][2] = {{10,20},{30,40},{50,60}};
    printMat(mat);
    return 0;
}