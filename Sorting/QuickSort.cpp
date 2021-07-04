#include<bits/stdc++.h>

//Time complexity : O(nlogn)
//Space complexity : O(n)



using namespace std;

int lPartition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l-1;

    for(int j = l; j<= h-1; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[h]);
    return i+1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int p = lPartition(arr, low, high);
        quickSort(arr, low, p - 1);
        quickSort(arr, p+1, high);
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    quickSort(arr, 0, 6);
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";
    return 0;
}