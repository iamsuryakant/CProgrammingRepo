#include<bits/stdc++.h>

using namespace std;

void Missing_Rep(int arr[], int n)
{
    
   //int n = sizeof(arr)/sizeof(arr[0]);
   int t = n+1;

   vector<int> v(t,0);

   for(int i = 0; i<n; i++)
   {
       v[arr[i]]++;
   }

    for(int i = 1; i<=n; i++)
    {
        if(v[i] > 1)
        {
            cout<<"Reapeated Number: "<<i<<endl;
        }

        if(v[i] == 0)
        {
            cout<<"Missing Number: "<<i<<endl;
        }
    }
    

}


int main ()
{

  int arr[] = { 2, 4, 5,3, 3};

  int n = sizeof (arr) / sizeof (arr[0]);

    Missing_Rep(arr, n);


//   for (int i = 0; i < n; i++)
//     {
//       cout << arr[i] << " ";
//     }

  return 0;
}