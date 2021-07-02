#include<bits/stdc++.h>

using namespace std;

void merge_(int arr1[], int arr2[],int n, int m)
{
    int i = 0, j = 0;

    while(i < n && j < m)
    {
        if(arr1[i] <= arr2[j])
        { 
            cout << arr1[i] << " ";
            i++;
        }
        else{
            cout<<arr2[j] << " ";
            j++;
        }
    }
    while(i<n)
    {
        cout<<arr1[i] << " ";
        i++;
    }
    while(j<m)
    {
        cout<<arr2[j] << " ";
        j++;
    }
}

int main(){

    int arr1[] = {1,2,3,4,5,6};
    int arr2[] = {6,7,8,9,10};

    merge_(arr1,arr2,6,5);

}