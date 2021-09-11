#include <bits/stdc++.h>

using namespace std;

int main()

{

int L;

cout<<"Enter total number of street lights : ";

cin>>L;

int A[L][2];

for(int i = 0; i < L; i++)

{

 cout<<"Light "<<i+1<<" covers the street from X"<<i+1<<" to Y"<<i+1<<". Please enter the value of X and Y : ";

 for(int j = 0 ; j < 2; j++)

 {

  cin>>A[i][j];

 }

}

int length = 0;

for(int i = 0; i < L; i++)

{

 int S = A[i][1] - A[i][0];

 length = length + S;

 if(A[i][1] > A[i+1][0] && i < L-1)

 {

  int C = A[i][1] - A[i+1][0];

  length = length - C;

 }

}

cout<<"Length of street = "<<length;

return 0;

}