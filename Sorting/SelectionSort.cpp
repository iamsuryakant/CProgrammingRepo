#include<bits/stdc++.h>
// It is not stable.
using namespace std;

void SelectionSort(int arr[], int n)
{
    int min, i, j;
    for(i = 0; i < n-1; i++)
    {
        min = i;
        for(j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min])
                min = j;
        }
        swap(arr[i], arr[min]);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    SelectionSort(arr, n);
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}