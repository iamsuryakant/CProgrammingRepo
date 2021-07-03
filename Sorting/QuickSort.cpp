#include<bits/stdc++.h>

using namespace std;

void parttion(int arr[], int low, int high) {
    int i = low, j = high;
    int pivot = arr[low + (high - low) / 2];
    while (i <= j) {
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;
        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    if (low < j)
        parttion(arr, low, j);
    if (i < high)
        parttion(arr, i, high);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        parttion(arr, low, high);
        quickSort(arr, low, high - 1);
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    quickSort(arr, 0, 5);
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";
    return 0;
}