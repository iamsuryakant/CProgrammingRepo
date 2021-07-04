#include<bits/stdc++.h>

//Merge Sort time complexity: O(nlogn)
//Merge Sort space complexity: O(n)
//Merge Sort worst case: O(n^2)
//Merge Sort best case: O(nlogn)
//Merge Sort average case: O(nlogn)
// Not a in-place sorting algorithm.


using namespace std;

void merge(int arr[],int l, int m, int h)
{
    int n1 = m - l + 1;
    
    int n2 = h-m;

    int left[n1], right[n2];

    for(int i = 0; i < n1; i++)
    {
        left[i] = arr[l + i];
    }
    for(int j = 0; j < n2; j++)
    {
        right[j] = arr[m + 1 + j];
    }

    int i = 0, j = 0, k = l;

    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k] = left[i];
            k++;
            i++;
        }
        else{
            arr[k] = right[j];
            k++;
            j++;
        }
    }

    while(i<n1)
    {
        arr[k] = left[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        arr[k] = right[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if(r>l){
        int m = l+ (r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);

    }
}
int main(){
    int arr[] = {3,6,8,10,2,1,9,4,7,5};
    mergeSort(arr,0,9);
    for(int x:arr)
        cout<<x<<" ";
    return 0;
} 