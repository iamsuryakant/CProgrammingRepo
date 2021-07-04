#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(int arr[], int n)
{
    unordered_set<int> s;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s.find(arr[i]) == s.end())
        {
            s.insert(arr[i]);
            arr[count++] = arr[i];
        }
    }
    return count;
}

int main()
{
    int arr[] = {5,5,2,2,2,4,3,1,1,1,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = removeDuplicates(arr, n);
    for (int i = 0; i < count; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}