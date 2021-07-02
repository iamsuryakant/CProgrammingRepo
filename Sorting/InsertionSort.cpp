// It is stable and In place.
// O(n) is in the best case.
// O(n^2) is in the worst case.
// O(n^2) is in the average case.
// used in practice for Timsort and Intra sort.
#include<bits/stdc++.h>

using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;

    }
}

int main(){

    int arr[] = {20,5,40,60,10,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

