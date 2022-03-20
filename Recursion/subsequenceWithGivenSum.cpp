#include<bits/stdc++.h>

using namespace std;


void printSub(int ind, int arr[], vector<int>&ds,
                int s, int n, int sum)
{
    if(ind == n)
    {
       if(s == sum)
       {
           for(auto it:ds)
           {
               cout << it << " ";
           }
           cout << endl;
       }
       return;
    }
    
    // Picking
    ds.push_back(arr[ind]);
    s += arr[ind];

    printSub(ind + 1, arr, ds, s, n, sum);

    s -= arr[ind];
    ds.pop_back();

    //not picking

    printSub(ind + 1, arr, ds, s, n, sum);

}


int main()
{
    int n = 3;
    int arr[] = {1, 2, 1};

    int sum = 2;

    vector<int> ds;
    printSub(0, arr, ds, 0, n, sum);
}