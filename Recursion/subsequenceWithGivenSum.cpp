#include<bits/stdc++.h>

using namespace std;

void file_i_o()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}


void printSub(int ind, int arr[], vector<int>&ds,
              int s, int n, int sum)
{
    if (ind == n)
    {
        if (s == sum)
        {
            for (auto it : ds)
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
    file_i_o();
    int n = 3;
    int arr[] = {1, 2, 1};

    int sum = 2;

    vector<int> ds;
    printSub(0, arr, ds, 0, n, sum);
}