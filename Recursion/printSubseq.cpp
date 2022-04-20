#include<bits/stdc++.h>

using namespace std;

void printSub(int ind, int arr[], int n, vector<int>&ds)
{
    if(ind == n)
    {
        for(auto it:ds)
        {
            cout << it << " ";
        }
        if(ds.size() == 0)
        {
            cout << "{}";
        }  
        cout<< endl;
        return;
    }

    
   // return;
    //not picking

    printSub(ind + 1, arr, n, ds);

   // picking condition
    ds.push_back(arr[ind]);
    printSub(ind + 1, arr, n, ds);
    ds.pop_back();

   
}


int main(){

    int n = 3;
    int arr[] = {3, 1, 2};

    vector<int> ds;

    printSub(0, arr, n, ds);
}